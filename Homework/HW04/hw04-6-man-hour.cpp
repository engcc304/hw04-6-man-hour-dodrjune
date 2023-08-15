/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include <stdio.h>

int main() {
    char EmployID[10] ;
    float hours ; 
    float Salaryamounthours ;
    float Salary ;
    printf("Input the Employees ID :\n" ) ;
    scanf ("%s",EmployID ) ;
    printf ( "Input the working hrs :\n" ) ;
    scanf ( "%f", &hours ) ;
    printf ( " Salary amount/hr :\n" ) ; 
    scanf ( "%f", &Salaryamounthours) ;

    Salary = Salaryamounthours * hours ;
    printf ( "Expected Output :\n" ) ;
    printf ( " Employees ID = %s\n", EmployID ) ;
    printf ("Salary = U$ %0.2f\n", Salary) ;

    return 0;
}//end function