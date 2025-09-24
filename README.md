Research :

Links:-  1) https://testbook.com/maths/boolean-algebra

             2) \https://www.geeksforgeeks.org/digital-logic/boolean-algebra/
          
                 3)https://www.monolithicpower.com/en/learning/mpscholar/battery-management-systems/case-studies-in-bms/bms-in-portable-devices?srsltid=AfmBOopSkbDffePQopskDd9nNgcJY90jn5admk64UM0Tjp5A9KTGkGAK&utm_source=chatgpt.com


The concept of 0 and 1 comes from Boolean algebra, where variables can only have two values: 1 (true) and 0 (false). Because it deals with just two states, it is also called binary algebra.
Boolean algebra plays a central role in digital electronics (PCs, laptops, microprocessors, etc.) where logical operations are performed using binary states. It also connects directly to programming languages such as C and C++, where the boolean data type can hold only two values: true or false.
In programming, this concept is essential for decision-making. For example, if and else statements rely on Boolean conditions. If a condition evaluates to true (1), one block of code executes; if it is false (0), another block executes.


Analysis:
The binary system of 0 and 1 has a wide range of applications in both hardware and software:
Logic Gates: Boolean algebra is used to design fundamental logic gates such as AND, OR, and NOT, which are building blocks of digital circuits and microprocessors.


Boolean Search Operators: Search engines and databases use Boolean logic (AND, OR, NOT) to filter and refine search results. The presence or absence of a word can be represented by 1 and 0.


Statistics: Binary variables often represent outcomes such as success/failure or yes/no, which are coded as 1 and 0 for easier analysis and modeling.


Artificial Intelligence (AI): Boolean logic forms the basis of decision-making structures such as decision trees, which are essential in machine learning, rule-based systems, and expert systems.


Ideate:
Based on these fundamentals, I pondered of a problem statement:
“Automatic activation of power-saving mode in a digital, battery-powered device once the battery level falls below 25%.”
In this case, the system continuously monitors the battery percentage. If the value drops below 25, the condition evaluates to true (1), and the device automatically switches to power-saving mode. If the battery level is above or equal to 25, the condition is false (0), and the device remains in normal mode.

Build:
In this step, I designed and created a simple model for the problem statement. Since we are not making real hardware, the build was done in C programming.
Define a variable per.


Use an if–else condition to check if the battery is below 25%.


If true, display "Power Saving Mode ON".


If false, display "Power Saving Mode OFF".

CODE:
#include<stdio.h>
int main()
{
    float per;
    printf("Enter your battery percentage ");
    scanf("%f",&per);
    if(per<=0)
    {
        printf("Invalid input");
    }
        else if(per>100)
    {
        printf("Invalid input");
    }
    else if(per<=25)
    {
        printf("Power saving mode on");
    }
    else
    {
        printf("Power saving mode off");
    }
    return 0;
}

Test:
Here we verify the logic by running different test cases and checking the output.

Case 1:Percentage above 25%.
Enter your battery percentage 50
Power saving mode off

Case 2:Percentage below or equal to 25%.
Enter your battery percentage 15
Power saving mode on

Case 3:Percentage is invalid i.e. > 100 and < 0.
Enter your battery percentage 105
Invalid Input


These tests confirm that the program behaves correctly: whenever the input is below 25, the mode turns ON, otherwise it stays OFF. It also recognizes invalid input and gives appropriate output. 
