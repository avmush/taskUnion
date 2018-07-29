#include <iostream>
#include <string>
using namespace std;

 struct books
 {
     string name;
     string author;
     union
     {
       float priceByDollar;
       int priceByDram;
     };
 };
 

int main() 
{
    // setlocale(LC_ALL, "Armenian"); chashxatec!!!!

    books book1;
    book1.name = " 'The little Prince' ";
    book1.author = "Antoine De Saint-Exupery";
    book1.priceByDollar = 20.45;

    books book2;
    book2.name = " 'The unsilenceable belfry' ";
    book2.author= "Paruyr Sevak";
    book2.priceByDram = 12000;

    cout<<book1.author<<" - "<<book1.name<<" "<<book1.priceByDollar<<" $"<<endl;
    cout<<book2.author<<" - "<<book2.name<<" "<<book2.priceByDram<<" AMD"<<endl;
}
