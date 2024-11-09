#include<stdio.h>
void main() {
int i,arr[100],len,s,flag=
0
;
printf("Number of elements : ");
scanf(
"%d
",&len);

printf("Enter the elements : ");
for(i=
0;i<len;i++)
{
scanf(
"%d
",&arr[i]);

}
printf("Enter the elements to be searched : ");
scanf(
"%d
",&s);
for(i=
0;i<len;i++)
{
if(s==arr[i]) {
flag=
1
;
printf("Search successfull,found %d /n",i+
1);

break
;
}}
if(flag==
0
)

{
printf("Sreach failed,not found /n"); }}