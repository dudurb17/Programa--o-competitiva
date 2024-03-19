#include <iostream>

void sequencia(int n)
{
    while (n != 1)
    {
        std::cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
    }
    std::cout << n << std::endl; // Mostra o último número da sequência (que é 1)
}

int main()
{
    int numero = 3;

    std::cout << "Sequência gerada para " << numero << ": ";
    sequencia(numero);

    return 0; // Retorna 0 para indicar sucesso
}