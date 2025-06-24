#!/bin/bash

mostrar_menu() {
    echo ""
    echo "=== Calculadora EBAC ==="
    echo "1. Soma"
    echo "2. Subtração"
    echo "3. Multiplicação"
    echo "4. Divisão"
    echo "5. Sair"
}

ler_numero() {
    local prompt="$1"
    local numero
    while true; do
        read -p "$prompt" numero
        if [[ "$numero" =~ ^-?[0-9]+$ ]]; then
            echo "$numero"
            return
        else
            echo "Não foi possível fazer esta operação. Digite um número válido."
        fi
    done
}

executar_operacao() {
    case $1 in
        1)
            resultado=$(( $2 + $3 ))
            echo "Resultado: $2 + $3 = $resultado"
            ;;
        2)
            resultado=$(( $2 - $3 ))
            echo "Resultado: $2 - $3 = $resultado"
            ;;
        3)
            resultado=$(( $2 * $3 ))
            echo "Resultado: $2 * $3 = $resultado"
            ;;
        4)
            if [ "$3" -eq 0 ]; then
                echo "Erro: Não é possível dividir por zero."
            else
                resultado=$(( $2 / $3 ))
                echo "Resultado: $2 / $3 = $resultado"
            fi
            ;;
        *)
            echo "Opção inválida!"
            ;;
    esac
}

mostrar_menu

read -p "Escolha uma opção (1-5): " opcao

if ! [[ "$opcao" =~ ^[1-5]$ ]]; then
    echo "Erro, opção inválida. Encerrando o programa."
    exit 1
fi

if [ "$opcao" -eq 5 ]; then
    echo "Encerrando calculadora EBAC, Adeus!"
    exit 0
fi

num1=$(ler_numero "Digite o primeiro número: ")
num2=$(ler_numero "Digite o segundo número: ")

executar_operacao "$opcao" "$num1" "$num2"
