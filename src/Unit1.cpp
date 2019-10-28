//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
#pragma resource "winxp.res"
TForm1 *Form1;
int z=0,x=300,q1=0;
int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0,a15=0,a16=0,a17=0,a18=0,a19=0,a20=0,a21=0,a22=0,a23=0,a24=0,a25=0;
int  b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0,b18=0,b19=0,b20=0,b21=0,b22=0,b23=0,b24=0,b25=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    system("echo %date% %time% %username%님 Special Security for Windows 실행 >> log.txt") ;
    ShellExecute(NULL,"open","kill.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) // 로그온
{
    Form1->Hide() ;
    Timer2->Enabled=false ;
    if(Button3->Enabled==false)
    {
        system("taskkill /im cmd.exe /f") ;
        system("start C:\\Windows\\explorer.exe") ;
        ::Sleep(1000) ;
        TrayIcon1->Visible=true ;
        system("echo %date% %time% %username%님이 로그온 하셨습니다. >> log.txt") ;
    }
    if(CheckBox1->Checked==true)
    {
        Form3->Show() ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrayIcon1Restore(TObject *Sender)
{
    CheckBox1->Checked=true ;
    Button3->Enabled=true ;
    Timer2->Enabled=true ;
    Form1->Show() ;
    system("echo %date% %time% %username%님 환경 설정 페이지 접속 시도") ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox1Click(TObject *Sender) // 전원 관리
{
    if(ComboBox1->ItemIndex==0) // 사용자 전환
    {
        MessageBeep(0) ;
        if(MessageDlg("사용자를 전환하시겠습니까?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
        {
            system("echo %date% %time% %username%님 사용자 전환 >> log.txt") ;
            system("shutdown /l /f /t 0") ;
        }
    }
    else if(ComboBox1->ItemIndex==1) // 다시 시작
    {
        MessageBeep(0) ;
        if(MessageDlg("시스템을 다시 시작하시겠습니까?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
        {
            system("echo %date% %time% %username%님 다시 시작 >> log.txt") ;
            system("shutdown /r /f /t 0") ;
        }
    }
    else if(ComboBox1->ItemIndex==2) // 시스템 종료
    {
        MessageBeep(0) ;
        if(MessageDlg("Are you sure you want to shutdown the system?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
        {
            system("echo %date% %time% %username%님 시스템 종료 >> log.txt") ;
            system("shutdown /s /f /t 0") ;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    Label1->Caption=Time() ;
    Label2->Caption=Date() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender) // USB Unlock
{

    MessageBeep(0) ;
    ShowMessage("Special Security for Windows USB Unlock용 USB를 넣고 OK 버튼을 눌러 주세요.") ;
    ::Sleep(3000) ;
    ShellExecute(NULL,"open","detect-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
    ::Sleep(1000) ;
    Memo1->Clear() ;
    Memo1->Lines->LoadFromFile("usb.txt") ;
    if(Memo1->Text.SubString(1,1)==0)
    {
        MessageBeep(0) ;
        ShowMessage("Special Security for Windows USB Unlock용 USB 장치를 찾을 수 없습니다.") ;
    }
    else
    {
        MessageBeep(0) ;
        ShowMessage("Special Security for Windows USB Unlock용 USB가 발견되었습니다!\n"+Memo1->Text.SubString(1,2)) ;
        Form2->Edit2->Text = Memo1->Text.SubString(1,2);
        Form2->Label1->Caption = Memo1->Lines->Text+"드라이브가 검색되었습니다.";
        Form2->Show();
        Form1->Hide();
    }
    Memo1->Clear() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
z++;

if(z==x)
{
        q1=1;
        ShowMessage("5 minute over. change") ;
        Label4->Caption = "";
        Label5->Caption = "";
        Label6->Caption = "";
        Label7->Caption = "";
        Label8->Caption = "";
        Label9->Caption = "";
        Label10->Caption = "";
        Label11->Caption = "";
        Label12->Caption = "";
        Label13->Caption = "";
        Label14->Caption = "";
        Label15->Caption = "";
        Label16->Caption = "";
        Label17->Caption = "";
        Label18->Caption = "";
        Label19->Caption = "";
        Label20->Caption = "";
        Label21->Caption = "";
        Label22->Caption = "";
        Label23->Caption = "";
        Label24->Caption = "";
        Label25->Caption = "";
        Label26->Caption = "";
        Label27->Caption = "";
        Label28->Caption = "";
        a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,a11=0,a12=0,a13=0,a14=0,a15=0,a16=0,a17=0,a18=0,a19=0,a20=0,a21=0,a22=0,a23=0,a24=0,a25=0;

}
else if(z<x)
{
        Label29->Caption = z;
    for(int f=0;f<=25;f++)
    {
        AnsiString t=Time() ;
        int i=0 ;
        for(int g=0;g<=StrToInt(t.SubString(t.Length()-1,t.Length()));g++)
        {
            i=rand() %26 ;
        }
        if(i==0 && a1==0)
        {
                a1=1;
                if(Label4->Caption == "")
                {
                        Label4->Caption = "a";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "a";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "a";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "a";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "a";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "a";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "a";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "a";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "a";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "a";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "a";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "a";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "a";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "a";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "a";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "a";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "a";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "a";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "a";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "a";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "a";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "a";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "a";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "a";
                        a1=1;
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "a";
                        a1=1;
                }
                else
                {
                        i=0;
                        a1=1;
                        break;
                }
        }
        else if(i==1 && a2==0)
        {
                a2=1;
                if(Label4->Caption == "")
                {
                        Label4->Caption = "b";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "b";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "b";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "b";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "b";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "b";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "b";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "b";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "b";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "b";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "b";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "b";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "b";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "b";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "b";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "b";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "b";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "b";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "b";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "b";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "b";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "b";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "b";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "b";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "b";
                }
                else
                {
                        a2=1;
                        i=1;
                }
        }
        else if(i==2 && a3==0)
        {
                 a3=1;
                if(Label4->Caption == "")
                {
                        Label4->Caption = "c";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "c";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "c";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "c";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "c";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "c";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "c";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "c";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "c";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "c";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "c";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "c";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "c";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "c";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "c";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "c";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "c";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "c";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "c";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "c";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "c";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "c";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "c";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "c";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "c";
                }
                else
                {
                        i=2;
                }
        }
        else if(i==3 && a4==0)
        {
                a4=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "d";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "d";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "d";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "d";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "d";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "d";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "d";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "d";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "d";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "d";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "d";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "d";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "d";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "d";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "d";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "d";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "d";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "d";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "d";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "d";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "d";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "d";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "d";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "d";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "d";
                }
                else
                {
                        i=3;
                }
        }
        else if(i==4 && a5==0)
        { 
                a5=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "e";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "e";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "e";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "e";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "e";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "e";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "e";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "e";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "e";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "e";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "e";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "e";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "e";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "e";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "e";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "e";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "e";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "e";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "e";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "e";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "e";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "e";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "e";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "e";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "e";
                }
                else
                {
                        i=4;
                }
        }
        else if(i==5 && a6==0)
        {   
                a6=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "f";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "f";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "f";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "f";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "f";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "f";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "f";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "f";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "f";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "f";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "f";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "f";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "f";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "f";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "f";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "f";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "f";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "f";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "f";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "f";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "f";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "f";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "f";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "f";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "f";
                } 
                else
                {
                        i=5;
                }
        }
        else if(i==6 && a7==0)
        {     
                a7=1;
                        if(Label4->Caption == "")
                {
                        Label4->Caption = "g";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "g";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "g";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "g";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "g";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "g";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "g";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "g";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "g";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "g";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "g";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "g";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "g";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "g";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "g";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "g";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "g";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "g";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "g";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "g";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "g";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "g";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "g";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "g";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "g";
                } 
                else
                {
                         i=6;
                }
        }
        else if(i==7 && a8==0)
        {    
                a8=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "h";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "h";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "h";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "h";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "h";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "h";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "h";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "h";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "h";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "h";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "h";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "h";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "h";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "h";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "h";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "h";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "h";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "h";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "h";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "h";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "h";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "h";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "h";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "h";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "h";
                } 
                else
                {
                         i=7;
                }
        }
        else if(i==8 && a9==0)
        {      
                a9=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "i";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "i";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "i";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "i";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "i";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "i";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "i";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "i";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "i";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "i";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "i";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "i";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "i";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "i";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "i";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "i";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "i";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "i";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "i";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "i";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "i";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "i";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "i";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "i";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "i";
                }  
                else
                {
                        i=8;
                }
        }
        else if(i==9 && a10==0)
        {       
                a10=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "j";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "j";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "j";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "j";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "j";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "j";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "j";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "j";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "j";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "j";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "j";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "j";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "j";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "j";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "j";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "j";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "j";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "j";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "j";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "j";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "j";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "j";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "j";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "j";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "j";
                }   
                else
                {
                       i=9;
                }
        }
        else if(i==10 && a11==0)
        {      
                a11=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "k";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "k";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "k";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "k";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "k";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "k";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "k";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "k";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "k";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "k";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "k";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "k";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "k";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "k";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "k";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "k";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "k";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "k";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "k";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "k";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "k";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "k";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "k";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "k";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "k";
                }          
                else
                {
                         i=10;
                }
        }
        else if(i==11 && a12==0)
        {       
                a12=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "l";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "l";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "l";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "l";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "l";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "l";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "l";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "l";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "l";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "l";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "l";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "l";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "l";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "l";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "l";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "l";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "l";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "l";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "l";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "l";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "l";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "l";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "l";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "l";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "l";
                }      
                else
                {
                         i=11;
                }
        }
        else if(i==12 && a13==0)
        {      
                a13=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "m";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "m";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "m";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "m";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "m";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "m";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "m";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "m";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "m";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "m";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "m";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "m";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "m";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "m";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "m";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "m";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "m";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "m";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "m";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "m";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "m";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "m";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "m";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "m";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "m";
                }  
                else
                {
                         i=12;
                }
        }
        else if(i==13 && a14==0)
        {         
                a14=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "n";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "n";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "n";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "n";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "n";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "n";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "n";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "n";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "n";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "n";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "n";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "n";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "n";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "n";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "n";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "n";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "n";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "n";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "n";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "n";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "n";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "n";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "n";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "n";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "n";
                } 
                else
                {
                         i=13;
                }
        }
        else if(i==14 && a15==0)
        {            
                a15=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "o";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "o";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "o";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "o";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "o";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "o";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "o";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "o";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "o";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "o";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "o";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "o";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "o";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "o";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "o";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "o";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "o";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "o";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "o";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "o";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "o";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "o";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "o";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "o";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "o";
                } 
                else
                {
                         i=14;
                }
        }
        else if(i==15 && a16==0)
        {      
                a16=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "p";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "p";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "p";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "p";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "p";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "p";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "p";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "p";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "p";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "p";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "p";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "p";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "p";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "p";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "p";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "p";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "p";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "p";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "p";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "p";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "p";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "p";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "p";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "p";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "p";
                }   
                else
                {
                        i=15;
                }
        }
        else if(i==16 && a17==0)
        {        
                a17=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "q";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "q";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "q";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "q";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "q";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "q";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "q";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "q";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "q";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "q";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "q";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "q";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "q";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "q";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "q";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "q";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "q";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "q";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "q";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "q";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "q";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "q";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "q";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "q";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "q";
                }       
                else
                {
                        i=16;
                }
        }
        else if(i==17 && a18==0)
        {      
                a18=1;
                           if(Label4->Caption == "")
                {
                        Label4->Caption = "r";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "r";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "r";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "r";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "r";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "r";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "r";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "r";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "r";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "r";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "r";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "r";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "r";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "r";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "r";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "r";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "r";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "r";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "r";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "r";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "r";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "r";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "r";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "r";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "r";
                }           
                else
                {
                         i=17;
                }
        }
        else if(i==18 && a19==0)
        {         
                a19=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "s";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "s";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "s";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "s";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "s";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "s";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "s";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "s";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "s";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "s";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "s";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "s";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "s";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "s";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "s";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "s";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "s";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "s";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "s";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "s";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "s";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "s";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "s";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "s";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "s";
                }       
                else
                {
                        i=18;
                }
        }
        else if(i==19 && a20==0)
        {        
                a20=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "t";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "t";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "t";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "t";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "t";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "t";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "t";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "t";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "t";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "t";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "t";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "t";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "t";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "t";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "t";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "t";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "t";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "t";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "t";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "t";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "t";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "t";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "t";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "t";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "t";
                }  
                else
                {
                         i=19;
                }
        }
        else if(i==20 && a21==0)
        {        
                a21=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "u";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "u";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "u";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "u";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "u";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "u";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "u";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "u";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "u";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "u";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "u";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "u";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "u";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "u";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "u";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "u";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "u";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "u";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "u";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "u";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "u";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "u";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "u";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "u";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "u";
                }
                else
                {
                         i=20;
                }
        }
        else if(i==21 && a22==0)
        {        
                a22=1;
                        if(Label4->Caption == "")
                {
                        Label4->Caption = "v";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "v";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "v";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "v";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "v";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "v";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "v";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "v";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "v";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "v";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "v";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "v";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "v";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "v";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "v";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "v";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "v";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "v";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "v";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "v";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "v";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "v";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "v";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "v";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "v";
                }            
                else
                {
                         i=21;
                }
        }
        else if(i==22 && a23==0)
        {        
                a23=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "w";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "w";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "w";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "w";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "w";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "w";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "w";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "w";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "w";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "w";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "w";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "w";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "w";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "w";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "w";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "w";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "w";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "w";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "w";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "w";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "w";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "w";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "w";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "w";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "w";
                }            
                else
                {
                         i=22;
                }
        }
        else if(i==23 && a24==0)
        {        
                a24=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "x";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "x";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "x";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "x";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "x";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "x";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "x";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "x";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "x";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "x";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "x";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "x";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "x";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "x";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "x";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "x";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "x";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "x";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "x";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "x";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "x";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "x";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "x";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "x";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "x";
                }            
                else
                {
                         i=23;
                }
        }
        else if(i==24 && a25==0)
        {        
                a25=1;
                            if(Label4->Caption == "")
                {
                        Label4->Caption = "y";
                }
                else if(Label5->Caption == "")
                {
                        Label5->Caption = "y";
                }
                else if(Label6->Caption == "")
                {
                        Label6->Caption = "y";
                }
                else if(Label7->Caption == "")
                {
                        Label7->Caption = "y";
                }
                else if(Label8->Caption == "")
                {
                        Label8->Caption = "y";
                }
                else if(Label9->Caption == "")
                {
                        Label9->Caption = "y";
                }
                else if(Label10->Caption == "")
                {
                        Label10->Caption = "y";
                }
                else if(Label11->Caption == "")
                {
                        Label11->Caption = "y";
                }
                else if(Label12->Caption == "")
                {
                        Label12->Caption = "y";
                }
                else if(Label13->Caption == "")
                {
                        Label13->Caption = "y";
                }
                else if(Label14->Caption == "")
                {
                        Label14->Caption = "y";
                }
                else if(Label15->Caption == "")
                {
                        Label15->Caption = "y";
                }
                else if(Label16->Caption == "")
                {
                        Label16->Caption = "y";
                }
                else if(Label17->Caption == "")
                {
                        Label17->Caption = "y";
                }
                else if(Label18->Caption == "")
                {
                        Label18->Caption = "y";
                }
                else if(Label19->Caption == "")
                {
                        Label19->Caption = "y";
                }
                else if(Label20->Caption == "")
                {
                        Label20->Caption = "y";
                }
                else if(Label21->Caption == "")
                {
                        Label21->Caption = "y";
                }
                else if(Label22->Caption == "")
                {
                        Label22->Caption = "y";
                }
                else if(Label23->Caption == "")
                {
                        Label23->Caption = "y";
                }
                else if(Label24->Caption == "")
                {
                        Label24->Caption = "y";
                }
                else if(Label25->Caption == "")
                {
                        Label25->Caption = "y";
                }
                else if(Label26->Caption == "")
                {
                        Label26->Caption = "y";
                }
                else if(Label27->Caption == "")
                {
                        Label27->Caption = "y";
                }
                else if(Label28->Caption == "")
                {
                        Label28->Caption = "y";
                }     
                else
                {
                        i=24;
                }
        }

    }
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
if(z==x)
{
        if(q1==1)
        {
                x+=300;
        }
        Label30->Caption = "";
        Label31->Caption = "";
        Label32->Caption = "";
        Label33->Caption = "";
        Label34->Caption = "";
        Label35->Caption = "";
        Label36->Caption = "";
        Label37->Caption = "";
        Label38->Caption = "";
        Label39->Caption = "";
        Label40->Caption = "";
        Label41->Caption = "";
        Label42->Caption = "";
        Label43->Caption = "";
        Label44->Caption = "";
        Label45->Caption = "";
        Label46->Caption = "";
        Label47->Caption = "";
        Label48->Caption = "";
        Label49->Caption = "";
        Label50->Caption = "";
        Label51->Caption = "";
        Label52->Caption = "";
        Label53->Caption = "";
        Label54->Caption = "";
       
        b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,b12=0,b13=0,b14=0,b15=0,b16=0,b17=0,b18=0,b19=0,b20=0,b21=0,b22=0,b23=0,b24=0,b25=0;

}
else if(z<x)
{
    for(int f=0;f<=25;f++)
    {
        AnsiString t=Time() ;
        int i=0 ;
        for(int g=0;g<=StrToInt(t.SubString(t.Length()-1,t.Length()));g++)
        {
            i=rand() %26 ;
        }
        if(i==0 && b1==0)
        {
                b1=1;
                if(Label30->Caption == "")
                {
                        Label30->Caption = "a";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "a";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "a";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "a";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "a";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "a";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "a";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "a";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "a";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "a";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "a";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "a";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "a";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "a";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "a";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "a";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "a";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "a";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "a";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "a";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "a";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "a";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "a";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "a";
                        b1=1;
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "a";
                        b1=1;
                }
                else
                {
                        i=0;
                        b1=1;
                        break;
                }
        }
        else if(i==1 && b2==0)
        {
                b2=1;
                if(Label30->Caption == "")
                {
                        Label30->Caption = "b";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "b";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "b";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "b";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "b";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "b";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "b";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "b";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "b";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "b";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "b";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "b";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "b";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "b";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "b";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "b";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "b";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "b";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "b";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "b";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "b";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "b";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "b";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "b";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "b";
                }
                else
                {
                        b2=1;
                        i=1;
                }
        }
        else if(i==2 && b3==0)
        {
                 b3=1;
                if(Label30->Caption == "")
                {
                        Label30->Caption = "c";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "c";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "c";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "c";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "c";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "c";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "c";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "c";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "c";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "c";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "c";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "c";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "c";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "c";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "c";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "c";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "c";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "c";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "c";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "c";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "c";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "c";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "c";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "c";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "c";
                }
                else
                {
                        i=2;
                }
        }
        else if(i==3 && b4==0)
        {
                b4=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "d";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "d";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "d";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "d";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "d";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "d";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "d";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "d";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "d";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "d";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "d";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "d";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "d";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "d";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "d";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "d";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "d";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "d";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "d";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "d";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "d";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "d";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "d";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "d";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "d";
                }
                else
                {
                        i=3;
                }
        }
        else if(i==4 && b5==0)
        { 
                b5=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "e";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "e";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "e";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "e";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "e";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "e";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "e";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "e";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "e";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "e";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "e";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "e";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "e";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "e";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "e";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "e";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "e";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "e";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "e";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "e";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "e";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "e";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "e";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "e";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "e";
                }
                else
                {
                        i=4;
                }
        }
        else if(i==5 && b6==0)
        {   
                b6=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "f";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "f";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "f";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "f";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "f";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "f";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "f";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "f";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "f";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "f";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "f";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "f";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "f";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "f";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "f";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "f";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "f";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "f";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "f";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "f";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "f";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "f";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "f";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "f";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "f";
                } 
                else
                {
                        i=5;
                }
        }
        else if(i==6 && b7==0)
        {     
                b7=1;
                        if(Label30->Caption == "")
                {
                        Label30->Caption = "g";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "g";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "g";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "g";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "g";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "g";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "g";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "g";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "g";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "g";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "g";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "g";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "g";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "g";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "g";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "g";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "g";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "g";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "g";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "g";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "g";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "g";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "g";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "g";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "g";
                } 
                else
                {
                         i=6;
                }
        }
        else if(i==7 && b8==0)
        {    
                b8=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "h";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "h";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "h";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "h";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "h";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "h";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "h";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "h";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "h";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "h";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "h";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "h";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "h";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "h";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "h";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "h";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "h";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "h";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "h";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "h";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "h";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "h";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "h";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "h";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "h";
                } 
                else
                {
                         i=7;
                }
        }
        else if(i==8 && b9==0)
        {      
                b9=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "i";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "i";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "i";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "i";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "i";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "i";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "i";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "i";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "i";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "i";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "i";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "i";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "i";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "i";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "i";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "i";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "i";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "i";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "i";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "i";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "i";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "i";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "i";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "i";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "i";
                }  
                else
                {
                        i=8;
                }
        }
        else if(i==9 && b10==0)
        {       
                b10=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "j";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "j";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "j";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "j";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "j";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "j";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "j";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "j";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "j";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "j";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "j";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "j";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "j";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "j";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "j";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "j";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "j";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "j";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "j";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "j";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "j";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "j";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "j";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "j";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "j";
                }   
                else
                {
                       i=9;
                }
        }
        else if(i==10 && b11==0)
        {      
                b11=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "k";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "k";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "k";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "k";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "k";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "k";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "k";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "k";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "k";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "k";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "k";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "k";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "k";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "k";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "k";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "k";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "k";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "k";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "k";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "k";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "k";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "k";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "k";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "k";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "k";
                }          
                else
                {
                         i=10;
                }
        }
        else if(i==11 && b12==0)
        {       
                b12=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "l";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "l";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "l";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "l";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "l";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "l";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "l";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "l";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "l";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "l";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "l";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "l";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "l";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "l";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "l";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "l";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "l";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "l";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "l";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "l";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "l";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "l";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "l";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "l";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "l";
                }      
                else
                {
                         i=11;
                }
        }
        else if(i==12 && b13==0)
        {      
                b13=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "m";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "m";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "m";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "m";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "m";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "m";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "m";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "m";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "m";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "m";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "m";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "m";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "m";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "m";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "m";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "m";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "m";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "m";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "m";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "m";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "m";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "m";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "m";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "m";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "m";
                }  
                else
                {
                         i=12;
                }
        }
        else if(i==13 && b14==0)
        {         
                b14=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "n";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "n";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "n";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "n";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "n";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "n";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "n";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "n";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "n";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "n";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "n";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "n";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "n";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "n";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "n";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "n";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "n";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "n";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "n";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "n";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "n";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "n";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "n";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "n";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "n";
                } 
                else
                {
                         i=13;
                }
        }
        else if(i==14 && b15==0)
        {            
                b15=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "o";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "o";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "o";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "o";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "o";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "o";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "o";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "o";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "o";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "o";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "o";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "o";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "o";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "o";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "o";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "o";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "o";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "o";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "o";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "o";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "o";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "o";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "o";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "o";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "o";
                } 
                else
                {
                         i=14;
                }
        }
        else if(i==15 && b16==0)
        {      
                b16=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "p";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "p";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "p";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "p";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "p";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "p";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "p";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "p";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "p";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "p";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "p";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "p";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "p";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "p";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "p";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "p";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "p";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "p";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "p";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "p";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "p";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "p";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "p";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "p";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "p";
                }   
                else
                {
                        i=15;
                }
        }
        else if(i==16 && b17==0)
        {        
                b17=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "q";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "q";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "q";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "q";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "q";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "q";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "q";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "q";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "q";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "q";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "q";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "q";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "q";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "q";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "q";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "q";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "q";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "q";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "q";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "q";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "q";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "q";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "q";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "q";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "q";
                }       
                else
                {
                        i=16;
                }
        }
        else if(i==17 && b18==0)
        {      
                b18=1;
                           if(Label30->Caption == "")
                {
                        Label30->Caption = "r";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "r";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "r";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "r";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "r";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "r";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "r";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "r";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "r";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "r";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "r";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "r";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "r";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "r";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "r";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "r";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "r";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "r";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "r";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "r";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "r";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "r";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "r";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "r";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "r";
                }           
                else
                {
                         i=17;
                }
        }
        else if(i==18 && b19==0)
        {         
                b19=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "s";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "s";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "s";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "s";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "s";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "s";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "s";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "s";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "s";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "s";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "s";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "s";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "s";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "s";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "s";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "s";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "s";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "s";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "s";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "s";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "s";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "s";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "s";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "s";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "s";
                }       
                else
                {
                        i=18;
                }
        }
        else if(i==19 && b20==0)
        {        
                b20=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "t";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "t";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "t";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "t";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "t";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "t";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "t";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "t";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "t";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "t";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "t";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "t";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "t";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "t";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "t";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "t";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "t";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "t";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "t";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "t";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "t";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "t";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "t";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "t";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "t";
                }  
                else
                {
                         i=19;
                }
        }
        else if(i==20 && b21==0)
        {        
                b21=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "u";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "u";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "u";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "u";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "u";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "u";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "u";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "u";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "u";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "u";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "u";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "u";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "u";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "u";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "u";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "u";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "u";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "u";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "u";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "u";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "u";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "u";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "u";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "u";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "u";
                }
                else
                {
                         i=20;
                }
        }
        else if(i==21 && b22==0)
        {        
                b22=1;
                        if(Label30->Caption == "")
                {
                        Label30->Caption = "v";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "v";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "v";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "v";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "v";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "v";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "v";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "v";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "v";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "v";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "v";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "v";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "v";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "v";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "v";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "v";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "v";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "v";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "v";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "v";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "v";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "v";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "v";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "v";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "v";
                }            
                else
                {
                         i=21;
                }
        }
        else if(i==22 && b23==0)
        {        
                b23=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "w";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "w";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "w";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "w";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "w";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "w";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "w";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "w";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "w";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "w";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "w";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "w";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "w";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "w";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "w";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "w";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "w";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "w";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "w";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "w";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "w";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "w";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "w";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "w";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "w";
                }            
                else
                {
                         i=22;
                }
        }
        else if(i==23 && b24==0)
        {        
                b24=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "x";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "x";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "x";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "x";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "x";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "x";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "x";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "x";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "x";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "x";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "x";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "x";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "x";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "x";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "x";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "x";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "x";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "x";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "x";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "x";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "x";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "x";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "x";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "x";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "x";
                }            
                else
                {
                         i=23;
                }
        }
        else if(i==24 && b25==0)
        {        
                b25=1;
                            if(Label30->Caption == "")
                {
                        Label30->Caption = "y";
                }
                else if(Label31->Caption == "")
                {
                        Label31->Caption = "y";
                }
                else if(Label32->Caption == "")
                {
                        Label32->Caption = "y";
                }
                else if(Label33->Caption == "")
                {
                        Label33->Caption = "y";
                }
                else if(Label34->Caption == "")
                {
                        Label34->Caption = "y";
                }
                else if(Label35->Caption == "")
                {
                        Label35->Caption = "y";
                }
                else if(Label36->Caption == "")
                {
                        Label36->Caption = "y";
                }
                else if(Label37->Caption == "")
                {
                        Label37->Caption = "y";
                }
                else if(Label38->Caption == "")
                {
                        Label38->Caption = "y";
                }
                else if(Label39->Caption == "")
                {
                        Label39->Caption = "y";
                }
                else if(Label40->Caption == "")
                {
                        Label40->Caption = "y";
                }
                else if(Label41->Caption == "")
                {
                        Label41->Caption = "y";
                }
                else if(Label42->Caption == "")
                {
                        Label42->Caption = "y";
                }
                else if(Label43->Caption == "")
                {
                        Label43->Caption = "y";
                }
                else if(Label44->Caption == "")
                {
                        Label44->Caption = "y";
                }
                else if(Label45->Caption == "")
                {
                        Label45->Caption = "y";
                }
                else if(Label46->Caption == "")
                {
                        Label46->Caption = "y";
                }
                else if(Label47->Caption == "")
                {
                        Label47->Caption = "y";
                }
                else if(Label48->Caption == "")
                {
                        Label48->Caption = "y";
                }
                else if(Label49->Caption == "")
                {
                        Label49->Caption = "y";
                }
                else if(Label50->Caption == "")
                {
                        Label50->Caption = "y";
                }
                else if(Label51->Caption == "")
                {
                        Label51->Caption = "y";
                }
                else if(Label52->Caption == "")
                {
                        Label52->Caption = "y";
                }
                else if(Label53->Caption == "")
                {
                        Label53->Caption = "y";
                }
                else if(Label54->Caption == "")
                {
                        Label54->Caption = "y";
                }     
                else
                {
                        i=24;
                }
        }

    }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Change(TObject *Sender)
{
    if(Edit1->Text.Length()<=32)
    {
    }
    else
    {
        ShowMessage("Stop typing");
        Edit1->Text=Edit1->Text.SubString(1,32);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OpenO1Click(TObject *Sender)
{
    Form3->Show() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    CheckBox1->Checked=false ;
    Timer2->Enabled=false ;
    Form1->Hide() ;
    Button3->Enabled=false ;
}
//---------------------------------------------------------------------------

