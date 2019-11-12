#include <fstream>
#include <iostream>
using namespace std;

/* f(x,y) = -w * y */

float const wDelta = 0.0001;
float const w = 4;
float const t_0 = 0;
float const y_0 = 1;
float const delta = wDelta/w;

float implicit(float y_n);

int main(){
    float n = (4-w*t_0)/wDelta;
    float t = t_0;
    float y = y_0;
    
    ofstream outfile;
    outfile.open("implicit.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = implicit(y);
    }
    return 0;
}

float implicit(float y_n){
    float y_m;
    y_m = y_n - wDelta*y_n;
    return y_m;
}
/*
void ejemplo_escribe(string filename){
  ofstream outfile;


  outfile.open(filename);

  cout << "Escribiendo en " << filename << endl; 
  for (int i=0; i < 10; i++){
    outfile << i << endl;
  }
  outfile.close(); 
}
*/
