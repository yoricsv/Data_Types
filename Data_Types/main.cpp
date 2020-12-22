/*
  *****************************************************************************************
  *								It's C++ Code											*
  *****************************************************************************************
*/
// INCLUDE CODE BEGIN //
#include <iostream>	
// INCLUDE CODE END //

// NAMESPACE DEFINES BEGIN //
using namespace std;
// NAMESPACE DEFINES END //

// MAIN FUNCTION BEGIN //
int main(void)
{
	// CODE/INSTRUCTIONS BEGIN //
/*
  *****************************************************************************************************
  *                                         DATA TYPES             
  *
  *****************************************************************************************************
  * - FLOATING POINT NUMBERS -                                                                        *
  *---------------------------------------------------------------------------------------------------*
  * float                  (4 Bytes) Min: [up -3,402823E+38]          - single precision real types   *
  *                                  Max: [to  3,402823E+38]                                          *
  *---------------------------------------------------------------------------------------------------*
  * long float             (8 Bytes) Min: [up -1,79769313486232E+308] - double precision real types   *
  *                                  Max: [to  1,79769313486232E+308]                                 *
  *---------------------------------------------------------------------------------------------------*
  * double                 (8 Bytes) Min: [up -1,79769313486232E+308] - double precision real types   *
  *                                  Max: [to  1,79769313486232E+308]                                 *
  *****************************************************************************************************
  * - INTEGER NUMBERS -                                                                               *
  *---------------------------------------------------------------------------------------------------*
  * short int;             (2 Bytes) Min: [up -32768]                 - short integer numbers         *
  *                                  Max: [to  32767]                                                 *
  *---------------------------------------------------------------------------------------------------*
  * unsigned short int     (2 Bytes) Min: [up 0]                      - positive short integer        *
  *                                  Max: [to 65535]                    numbers                       *
  *---------------------------------------------------------------------------------------------------*
  * int                    (4 Bytes) Min: [up -2147483648]            - integer numbers               *
  * (long)                                 Max: [to  2147483647]                                      *
  *---------------------------------------------------------------------------------------------------*
  * unsigned int           (4 Bytes) Min: [up 0]                      - positive integer numbers      *
  * (unsigned long)                  Max: [to 4294967295]                                             *
  *---------------------------------------------------------------------------------------------------*
  * long long int          (8 Bytes) Min: [up -9223372036854775808]   - long integer numbers          *
  *                                  Max: [to  9223372036854775807]                                   *
  *---------------------------------------------------------------------------------------------------*
  * unsigned long long int (8 Bytes) Min: [up 0]                      - positive long long integer    *
  *                                  Max: [to 18446744073709551615]     numbers                       *
  *****************************************************************************************************
  * - CHARACTER TYPES -                                                                               *
  *---------------------------------------------------------------------------------------------------*
  * char                   (1 Bytes) Min: [up -128]                   - characters                    *
  *                                  Max: [to  127]                                                   *
  *---------------------------------------------------------------------------------------------------*
  * unsigned char          (1 Bytes) Min: [up 0]                      - characters                    *
  *                                  Max: [to 255]                                                    *
  *****************************************************************************************************
  * - BOOLEAN TYPES -                                                                                 *
  *---------------------------------------------------------------------------------------------------*
  * bool                   (1 Bytes) Min: [0       - FALSE]           - describes logical values      *
  *                                  Max: [1...255 - TRUE]                                            *
  *****************************************************************************************************
*/
    // SET RIGHT LOCALIZATION BEGIN //
    setlocale(LC_ALL, "Ru-RU");
    // SET RIGHT LOCALIZATION END //

    // PRACTISE OF DEFINE AND DECLARING VARIABLES BEGIN //
    
    //For define of VARIABLES we should point a TYPE and NAME out

    int a;                  //Example of variable define: INT - variable_type, A - variable_name
    a = 18;                 //appropriate value 18 for variable A (sign equal [=] - means appropriate)
    short b = 6;            //define and appropriate variable B (INT - type, B - variable name, = - appropriate, 6 - value) 
    int c = a + b;          //define the variable С which appropriate summation value from A and B
    int d = 3, f, age = 5;  //define several variables in one expression
    long e = 4;             //define variable E with long type and assign the value like 4
    f = e - d;              //assign variable F the value of subtraction variable D of E

    char EndLine = '\n';    //define variable ENDLINE with char type. Ordinary, this type could have only one symbol,
                            //but for Escape Consequences we can assign two symbols
                            //If we wanna use mo than one symbol we should define an array
                            //WARNING! The assigned symbols must be contained just between single quotes ['']!!!!

    char Hworld = 'H';      //define variable HWORLD with char type an assigned symbol [H].

    bool trues = true;      //define variables that might be 2 values (FALSE - 0, TRUE - other values)
    bool notTrue = false;   //output should be 0

    uint8_t program_state = 0;
    int picked_out;
    double firstNumber    = 0.;
    double secondNumber   = 0.;
    char action;

    enum Language
    {
        CHOOSE_LANGUAGE, ENGLISH, RUSSIAN
    };

    while (true)
    {
        switch (program_state)
        {
        case CHOOSE_LANGUAGE:
        {
            cout << "Hello!" << endl << "Choose your preferred language: " << endl;
            cout << "\t '1' - English," << endl;
            cout << "\t '2' - Russian" << endl;
            cin >> picked_out;

            if (cin.get() == (int)'\n')
            {
                switch (picked_out)
                {
                case 1:  program_state = ENGLISH; break;
                case 2:  program_state = RUSSIAN; break;
                default: program_state = CHOOSE_LANGUAGE; break;
                };
            }
            else
                cout << "ERROR!!! You made something wrong! Please, try again." << endl;
        }
        break;
        case ENGLISH:
        {
            cout << "Enter the first operand to calculate: " << endl;
            cin >> firstNumber;
            cout << "Enter the second operand to calculate: " << endl;
            cin >> secondNumber;
            cout << "Select a symbol to perform actions on the entered numbers : " << endl;
            cout << "\t '+' - add the first and second numbers, " << endl;
            cout << "\t '-' - subtract the second number from the first, " << endl;
            cout << "\t '*' - multiply the first number by the second, " << endl;
            cout << "\t '/' - divide the first number by the second, " << endl;
            cin >> action;

            if (cin.get() == (char)'\n')
            {
                if (action == '+')
                    cout << "\t The addition result is: " << firstNumber + secondNumber << endl;
                else if (action == '-')
                    cout << "\t The result of the subtraction is: " << firstNumber - secondNumber << endl;
                else if (action == '*')
                    cout << "\t he result of the multiplication is: " << firstNumber * secondNumber << endl;
                else if (action == '/')
                {
                    if (firstNumber == 0 || secondNumber == 0)
                        cout << "\t ERROR! One of the operands is 0 - division is not possible!" << endl;
                    else
                        cout << "\t The division result is: " << firstNumber / secondNumber << endl;
                }
            }
            else
                cout << "ERROR!!! You made something wrong!" << endl;
        }
        break;
        case RUSSIAN:
        {
            cout << "Введите первый операнд для расчета : " << endl;
            cin >> firstNumber;
            cout << "Введите второй операнд для расчета : " << endl;
            cin >> secondNumber;
            cout << "Выберите символ для совершения действий над введенными числами : " << endl;
            cout << "\t '+' - сложить первое и второе число, " << endl;
            cout << "\t '-' - вычесть второе число из первого, " << endl;
            cout << "\t '*' - умножить первое число на второе, " << endl;
            cout << "\t '/' - разделить первое число на второе, " << endl;
            cin >> action;

            if (cin.get() == (char)'\n')
            {
                if (action == '+')
                    cout << "\t Результат сложения равен: " << firstNumber + secondNumber << endl;
                else if (action == '-')
                    cout << "\t Результат вычитания равен: " << firstNumber - secondNumber << endl;
                else if (action == '*')
                    cout << "\t Результат умножения равен: " << firstNumber * secondNumber << endl;
                else if (action == '/')
                {
                    if (firstNumber == 0 || secondNumber == 0)
                        cout << "\t ОШИБКА! Один из операндов равен 0 - выполнить деление не возможно!" << endl;
                    else
                        cout << "\t Результат деления равен: " << firstNumber / secondNumber << endl;
                }
            }
            else
                cout << "ОШИБКА!!! Вы ввели некоректные данные!" << endl;
        }
        break;
        default:
            program_state = CHOOSE_LANGUAGE;
            break;
        }
    }
    // PRACTISE OF DEFINE AND DECLARING VARIABLES END //
    // CODE/INSTRUCTIONS END //
}
// MAIN FUNCTION END //