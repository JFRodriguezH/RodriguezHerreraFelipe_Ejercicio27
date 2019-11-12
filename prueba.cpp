#include <fstream>
#include <iostream>
using namespace std;

/* f(x,y) = -w * y */


float const w = 4;
float const t_0 = 0;
float const y_0 = 1;

float expl(float y_n, float wDelta);
float impl(float y_n, float wDelta);

int main(){
    float wDelta = 0.1;
    float n = (4-w*t_0)/wDelta;
    float t = t_0;
    float y = y_0;
	float delta = wDelta/w;
    
    ofstream outfile;
    outfile.open("explicit_01.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = expl(y, wDelta);
    }
    outfile.close();
	
	t = t_0;
    y = y_0;
	
	outfile.open("implicit_01.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = impl(y, wDelta);
    }
    outfile.close();
    
    wDelta = 0.01;
    n = (4-w*t_0)/wDelta;
    t = t_0;
    y = y_0;
	delta = wDelta/w;
    
    outfile.open("explicit_001.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = expl(y, wDelta);
    }
    outfile.close();
	
	t = t_0;
    y = y_0;
	
	outfile.open("implicit_001.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = impl(y, wDelta);
    }
    outfile.close();
    
    wDelta = 1;
    n = (4-w*t_0)/wDelta;
    t = t_0;
    y = y_0;
	delta = wDelta/w;
    
    outfile.open("explicit_1.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = expl(y, wDelta);
    }
    outfile.close();
	
	t = t_0;
    y = y_0;
	
	outfile.open("implicit_1.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = impl(y, wDelta);
    }
    outfile.close();
    
    wDelta = 1.5;
    n = (4-w*t_0)/wDelta;
    t = t_0;
    y = y_0;
	delta = wDelta/w;
    
    outfile.open("explicit_15.dat");
    for(int i=0; i<n+1; i++){
        outfile << t << " " << y <<endl;
        t += delta;
        y = expl(y, wDelta);
    }
    outfile.close();    
    
    return 0;
}

float expl(float y_n, float wDelta){
    float y_m;
    y_m = y_n - wDelta*y_n;
    return y_m;
}

float impl(float y_n, float wDelta){
	float y_m;
	y_m = y_n/(1+wDelta);
	return y_m;
}
