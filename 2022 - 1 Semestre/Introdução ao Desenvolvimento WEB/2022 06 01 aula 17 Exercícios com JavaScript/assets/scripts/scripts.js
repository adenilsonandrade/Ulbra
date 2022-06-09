function calcular() {
    var num1 = parseFloat(document.getElementById('num1').value)
    var num2 = parseFloat(document.getElementById('num2').value)
    var operacao = document.getElementById('operacao').value
    var resultado
    switch (operacao) {
        case '+':
            resultado = num1 + num2
            break;
        case '-':
            resultado = num1 - num2
            break;
        case '*':
            resultado = num1 * num2
            break;
        case '/':
            resultado = num1 / num2
            break;
    }
    document.getElementById('resultado').innerHTML = 'O resultado é: ' + resultado
}

function calcularConta() {
    var quantidade = parseFloat(document.getElementById('quantidade').value)
    var valorUnitario = parseFloat(document.getElementById('valorUnitario').value)
    var valorFinal = quantidade * valorUnitario
    if (quantidade > 100 && quantidade <= 200) {
        valorFinal = valorFinal * 1.25
    }
    else if (quantidade > 200) {
        valorFinal = valorFinal * 1.5
    }
    document.getElementById('valorFinal').innerHTML = 'O valor da conta é: ' + valorFinal
}

function verificaMaior() {
    var numeros = document.getElementById('numeros').value
    numeros = numeros.split(',')
    var maiorNumero = 0
    for (let i = 0; i < numeros.length; i++) {
        var valorAtual = parseFloat(numeros[i])
        if (valorAtual > maiorNumero) {
            maiorNumero = numeros[i]
        }
    }
    document.getElementById('maiorNumero').innerHTML = 'O maior número digitado foi: ' + maiorNumero
}

function verificaIdades() {
    var idades = document.getElementById('idades').value
    idades = idades.split(',')
    var maiorDeIdade = 0
    var menorDeIdade = 0
    for (var i = 0; i < idades.length; i++) {
        var idadeAtual = parseFloat(idades[i])
        if (idadeAtual < 18) {
            menorDeIdade++
        } else if (idadeAtual >= 18) {
            maiorDeIdade++
        }
    }
    document.getElementById('mostraIdades').innerHTML = maiorDeIdade + ' são maiores de idade, ' + menorDeIdade + ' são menores de idade '
}