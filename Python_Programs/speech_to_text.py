import speech_recognition as sr
r= sr.Recognizer()
with sr.Microphone() as source:
    print("speak anything:")
    audio= r.listen(source)
    try:
        text=r.recognize_google(audio)
        print("you said:",format(text))
    except:
        print("we can not recognize your voice ,please speak again!")