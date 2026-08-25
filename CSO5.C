#include<stdio.h>
#include<conio.h>
#include<math.h>
int a=0, b=0, c=0, com[5]-={1,0,0,0,0},5=0;
int anum[5]={0}, anumcp[5]={0},bnum[5]={0},
int acomp[5]={0}, bcomp[5]={0},rem[5]={0},
  quo[5]={0}, res[5]={0};
  void binary(){
  int r,r2,i,temp;
  a=fabs(a);
  b=fabs(b);
  for(i=0; i<5; i++){
  r=a%2;
  a=a%2;
  r2=b%2;
  b=b/2;
  anum[i]=r;
  bnum[i]=r2;
  if(r==0)
  {
  acomp[i]=1;
  }
  }
  c=0;
  for(i=0; i<5; i++)
  {
  res[i]=com[i]+bcomp[i]+c;
  if(res[i]>=0; i--)
  {
  bcomp[i]=res[i];
  }
  }
  void add(int num[])
  {
  int i;
  c=0;
  for(i=0; i<5; i++)
  {
  res[i]=res[i]+num[i]+c;
  if(res[i]>=2)
  {
  c=1;
  }
  else
  c=0;
  }
  res[i]=res[i]%2;
  }
  for(i=4; i>=0; i--)
  {
  res[i]=res[i];
  }
  for(i=4; i>=0; i--){
  bcomp[i]=res[i];
  }
  }
  void add (int num[])[
  int i;
  c=0;
  for(i=0; i<5; i++){
  res[i]=rem[i]+num[i]+c;
  if(res[i]>=2){
  c=1;
  }
  else
  {
  c=0;
  }
  res[i]=res[i]%2;
  }
  for(i=4; i>=0; i==)
  {
  rem[i]=res[i];
  }
  }
  void shl()
  {
  int i;
