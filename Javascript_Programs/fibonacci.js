
function fibonacci() {
    //checks if the number written belongs to the sequence
    let numero = 27;
    let seq_fibo = 1;
    let ant1 = 0;
    let ant2 = 0;
    while (1) {
        if (numero == 0) {
            alert(`O  número ${numero} pertence a sequência de Fibonacci!`);
            break;
        } else if (numero == seq_fibo) {
            alert(`O  número ${numero} pertence a sequência de Fibonacci!`);
            break;
        } else if (numero > seq_fibo) {
            console.log(seq_fibo);
            ant2 = seq_fibo;
            seq_fibo = seq_fibo + ant1;
            ant1 = ant2;
        } else {
            alert("Este número não pertence a sequência de Fibonacci!");
            break;
        };
    }

}