//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int t=60 ;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender) // 확인
{
    char z[1024] ;
    DWORD dwLength ;
    GetUserName(z,&dwLength) ;
    z[dwLength]=0 ;
    AnsiString username=z ;
    ShellExecute(NULL,"open","unlock-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
    Memo1->Clear() ;
    Memo1->Lines->LoadFromFile(Edit2->Text+"\\"+username+".ssw");
    ShellExecute(NULL,"open","make-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
    int i ;
    char c[256] ;
    AnsiString a ;
    memset(c,0x00,256) ;
    memcpy(c,Edit1->Text.c_str(),strlen(Edit1->Text.c_str())) ;
    for(int f=0;f<=255;f++)
    {
        if(int(c[f])!=0)
        {
            i=int(c[f]) ;
            a+=IntToStr(i) ;
        }
    }
    if(a==Memo1->Text)
    {
        Form2->Close() ;
        Form1->Timer2->Enabled=false ;
        system("taskkill /im cmd.exe /f") ;
        system("start C:\\Windows\\explorer.exe") ;
        ::Sleep(1000) ;
        Form1->TrayIcon1->Visible=true ;
        system("echo %date% %time% %username%님이 USB Unlock으로 로그온하셨습니다. >> log.txt") ;
        if(Form1->CheckBox1->Checked==true)
        {
            Form3->Show() ;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender) // 취소
{
    Timer1->Enabled=false ;
    Form2->Close() ;
    Form1->Show() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer1Timer(TObject *Sender)
{
    t-- ;
    Button2->Caption="Cancel ("+IntToStr(t)+"s)" ;
    if(t==0)
    {
        t=60 ;
        Button2->Caption="Cancel (60s)" ;
        Button2->Click() ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormShow(TObject *Sender)
{
    Timer1->Enabled=true ;
}
//---------------------------------------------------------------------------

