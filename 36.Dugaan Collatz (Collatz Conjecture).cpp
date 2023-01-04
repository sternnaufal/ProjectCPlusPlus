#include <iostream>
#include <ctime>

using namespace std;

bool Valid(int num) {
  if(num <= 0) {
    return false;
  } else {
    return true;
  }
}

bool Genap(int num) {
  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

void calculate(int num) {
  if (num == 1) {
    cout << endl << "Finished!" << endl;
    return;
  } else if(Genap(num)) {
    num = num / 2;
    cout << num << " -> ";
    calculate(num);
  } else {
    num = (num * 3) + 1;
    cout << num << " -> ";
    calculate(num);
  }
}

int main() {

  int input;
  cout<<"Selamat datang di collatz conjecture (dugaan collatz)\n yang dimana semua angka selain 0 akan berakhir pada angka 1\n";
  cout<<"Dengan rumus : Jika Ganjil 3x+1 dan Jika Genap /2\n\n";
  cout << "Masukkan Angka Selain 0:" << endl;
  cin >> input;

  if(Valid(input)) {
  	cout<<"Maka urutannya adalah:\n\n";
    calculate(input);
  } else {
    cout << "Angka yang dimasukkan valid." << endl;
    return 0;
  }

  return 0;
}
