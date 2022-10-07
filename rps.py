from random import choice

def start_game():
    game_options = ['rock', 'paper', 'scissors']

    print('\nRock, Paper, Scissors!!!\n')
    try:
        number_of_rounds = int(input('How many rounds do you want to play for? Max is 10: '))
    except ValueError:
        print('Invalid input.')
        number_of_rounds = 10

    print('Number of rounds: ' + str(min(number_of_rounds, 10)))

    # collates the final scores
    user_score = 0
    computer_score = 0

    # runs for each round
    for round in range(min(number_of_rounds, 10)):
        print('\n<<< Round ' + str(round + 1) + ' >>>\n')
        user_value = input('Press 0 for Rock, 1 for Paper, 2 for Scissors: ')

        # prompts the user until a numeric input is typed in
        while not(user_value.isnumeric()):
            print('\nPlease input a value between 0 and 2\n')
            user_value = input(
                'Press 0 for Rock, 1 for Paper, 2 for Scissors: ')

        # prompts the user until a numeric input within the required range is given
        while not(int(user_value) in range(3)):
            print('\nPlease input a value between 0 and 2\n')
            user_value = input(
                'Press 0 for Rock, 1 for Paper, 2 for Scissors: ')

        user_choice = game_options[int(user_value)]
        computer_choice = choice(game_options)

        print('\nYour choice: ' + user_choice.capitalize() +
              '\tComputer choice: ' + computer_choice.capitalize() + '\n')

        # determines the winner of each round
        if user_choice == computer_choice:
            print('>>> Stalemate')
        elif (user_choice == 'rock' and computer_choice == 'scissors') or (user_choice == 'paper' and computer_choice == 'rock') or (user_choice == 'scissors' and computer_choice == 'paper'):
            user_score += 1
            print('>>> You win round ' + str(round + 1))
        else:
            computer_score += 1
            print('>>> You lost round ' + str(round + 1))

    print('\n>>>>>> Your score: ' + str(user_score) + '\tComputer score: ' + str(computer_score))

    if user_score == computer_score:
        print('Too bad. Draw :(')
    elif user_score > computer_score:
        print('Congrats. You win!!!')
    else:
        print('Sorry. You lose :(')

start_game()
