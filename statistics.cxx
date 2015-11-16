#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

void Wuerfeln(const int N, double *p)
{
  int i;
  for (i = 0; i < N; i++)
   {
     p[i] = rand();
   }
   return;
}

void Statistik(const int N, double &m, double &v,const double *p)
{
  int i;
  m = 0.0;
  v = 0.0;
  for (i = 0; i < N; i++)
  {
    m += p[i];
  }
  m /= N;
  for (i = 0; i < N; i++)
  {
    v += pow((p[i] - m),2);
  }
  v /= N;
  return;
}

int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   
   srand(time(NULL));
   
   Wuerfeln(N,p);
   Statistik(N,mean,var,p);

   // Some lines here....

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}