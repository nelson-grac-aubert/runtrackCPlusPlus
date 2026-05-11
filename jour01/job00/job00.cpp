// Quelles sont les parenthèses superflues? 

// 1. a = (x + 5)
// 2. a = (x = y) + 2 
// 3. a = (x == y) 
// 4. (a < b) && (c < d)
// 5. (i++) * (n + p)

#include <iostream>

void test1(int x) 
{ 
    std::cout << "============ TEST 1 ==================" << std::endl;
    std::cout << "x = "<< x << std::endl;

    int a; 
    a = x + 5;

    std::cout << "a = " << a << std::endl;
    std::cout << "Si pas d'erreur et a est bien egal a x + 5, la parenthese est superflue " << std::endl;
}

void test2(int y) 
{
    std::cout << "============ TEST 2 ==================" << std::endl;
    std::cout << "y = ";
    std::cout << y << std::endl;

    int x = 0; 

    int a;
    a = x = y + 2; 

    std::cout << "a = " << a << std::endl;
    std::cout << "Si pas d'erreur et a est bien egal a y + 2, la parenthese est superflue " << std::endl;

}

void test3() 
{   

    std::cout << "============ TEST 3 ==================" << std::endl;

    bool a = false; 
    int x = 5;
    int y = 5; 

    a = x == y; 

    std::cout << "a = " << a << std::endl;
    std::cout << "Si pas d'erreur et a est bien egal a true, la parenthese est superflue " << std::endl;
    std::cout << "Oula attention un cout d'un true semble print un 1 (est ce que false c'est 0?) " << std::endl;
    // Oui ma princesse cout d'un true donne 1, cout d'un false donne 0 merci la doc 

}

void test4()
{
    std::cout << "============ TEST 4 ==================" << std::endl;

    bool result = false;

    int a = 0;
    int b = 1; 
    int c = 2;
    int d = 3; 

    result = a < b && c < d; 

    std::cout << "result = "<< result << std::endl;
    std::cout << "Si pas d'erreur et result est bien egal a true (cout un 1), la parenthese est superflue " << std::endl;
}

void test5() 
{
    std::cout << "============ TEST 5 ==================" << std::endl;

    int i = 3;
    int n = 2;
    int p = 1;

    int result = i++ * (n + p);

    std::cout << "resultat avec (n + p) = " << result << std::endl;
    std::cout << "i = " << i << std::endl;
    std::cout << "Les parentheses autour de i++ sont superflues, mais pas celles autour de n + p" << std::endl;
    // sans (n + p), le résultat serait 7 : 3 x 2 + 1
    std::cout << "Mais attention au comportement de i++ : il renvoie i, PUIS ENSUITE s'incrémente" << std::endl;
}

int main() { 
    test1(0); 
    test2(2);
    test3();
    test4(); 
    test5();
    return 0;
}