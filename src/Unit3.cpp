//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
    : TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm3::RadioButton1Click(TObject *Sender) // ��ȣ ����
{
    MessageBeep(0) ;
    if(MessageDlg("��ȣ�� ������� �����ðڽ��ϱ�?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
    {
        ShellExecute(NULL,"open","blank.exe",NULL,NULL,SW_SHOWMINIMIZED) ;
        CheckBox1->Checked=false ;
        system("echo %date% %time% %username%���� ��ȣ��     �Ǿ����ϴ�. >> log.txt") ;
    }
    else
    {
        RadioButton1->Checked=false ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::RadioButton2Click(TObject *Sender) // Windows ��ȣ
{
    MessageBeep(0) ;
    if(MessageDlg("Windows ��ȣ�� ����Ͻðڽ��ϱ�?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
    {
        ShellExecute(NULL,"open","windows.exe",NULL,NULL,SW_SHOWNORMAL) ;
        CheckBox1->Checked=false ;
        system("echo %date% %time% %username%���� Windows ��ȣ�� �����ϼ̽��ϴ�. >> log.txt") ;
    }
    else
    {
        RadioButton2->Checked=false ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::RadioButton3Click(TObject *Sender) // Special Security
{
    MessageBeep(0) ;
    if(MessageDlg("Special Security�� ����Ͻðڽ��ϱ�?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
    {
        ShowMessage("ingyeo") ;
        ShellExecute(NULL,"open","blank.exe",NULL,NULL,SW_SHOWMINIMIZED) ;
        CheckBox1->Enabled=true ;
        system("echo %date% %time% %username%���� Special Security�� �����ϼ̽��ϴ�. >> log.txt") ;
    }
    else
    {
        RadioButton3->Checked=false ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
    system("echo %date% %time% %username%�� ���� ������ ���� >> log.txt") ;
    Memo1->Lines->LoadFromFile("log.txt") ;
    Label1->Caption=IdIPWatch1->LocalIP();
}
//---------------------------------------------------------------------------






void __fastcall TForm3::Image3Click(TObject *Sender)
{
    Form3->Hide() ;
    Form4->Show() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
    Form3->Hide() ;
    Form4->Show() ;
}
//---------------------------------------------------------------------------

