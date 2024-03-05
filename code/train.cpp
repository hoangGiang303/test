#include<iostream>

using namespace std;
 
class sinhvien
{
    protected:
       int mssv,diemkt1,diemkt2;
    public:
                void nhapdiemkiemtra()
              {
                            cout<<"Nhap MSSV: ";
                            cin>>mssv;
                            cout<<"Nhap hai diem: ";
                            cin>>diemkt1>>diemkt2;
              }
};
class gdthechat
{
    protected:
       int diemtc;                   // la diem GDTC
    public:
                void nhapdiemgdtc()
              {
                 cout<<"\nNhap diem GDTC :";
                 cin>>diemtc;
 
              }
};
class thongtinsv:public sinhvien,public gdthechat
{
    int tongdiem,trungbinh;
    public:
    void display()
              {
                 tongdiem=(diemkt1+diemkt2+diemtc);
                 trungbinh=tongdiem/3;
                 cout<<"\n\n\tMSSV : "<<mssv<<"\n\tTong diem : "<<tongdiem;
               cout<<"\n\tDiem trung binh : "<<trungbinh;
              }
};
int main()
{
   
   thongtinsv obj;
   obj.nhapdiemkiemtra();
   obj.nhapdiemgdtc();
   obj.display();
   return 0;
}