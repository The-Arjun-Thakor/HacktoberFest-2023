#include<iostream>
using namespace std;

int main() {
  char x;
  float n1, n2;
  cout << "Enter operator: +, -, *, /: ";
  cin>>x;
  cout << "Enter two operands: ";
  cin >> n1 >> n2;
  switch(x) {
    case '+':
      cout <<n1<< " + " <<n2<< " = " <<n1 + n2;
      break;
    case '-':
      cout <<n1<< " - " <<n2<< " = " <<n1 - n2;
      break;
    case '*':
      cout <<n1<<" * "<<n2<< " = " <<n1 * n2;
      break;
    case '/':
      cout<<n1<<" / "<<n2<<" = "<<n1/n2;
      break;
    default:
      cout <<"Error! operator not recognized";
      break;
  }
  return 0;
}
