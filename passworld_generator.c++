#include<iostream>
#include<ctime>
#include<string>
using namespace std ;
class generatour{
    int leng ;
    string result ;
    string ch = "!@#$%^&*()_+=/*-:~" ;
    string nu = "1234567890" ;
    string lt  = "abcdefghigklmnopqrstuvwxyz" ;
    public:
    string password (){
        for(int i = 0 ; i < leng ; i++){
           if (i % 3 == 0) result += toupper(lt[rand()% 25]) ;
           else if (i % 4 == 0) result += tolower(lt[rand()% 25]) ;
           else if (i %2 == 0) result += nu[rand()% 9] ;
           else result += ch[rand()% 18] ;
        }
        cout << endl << result <<endl ;
        return result ;
       }
    generatour(int a ) : leng(a) {
         password() ;
        }
    generatour(){
        cout << "enter the length" << endl ;
        cin >> leng ;
        cout << endl ;
        password() ;
    }
   ~generatour(){}
};


int main(){
    // test
    generatour g1(7) ;
    generatour g2;
    return 0 ;
}