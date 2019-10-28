//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
AnsiString usb=0,username ;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form3->Show() ;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ComboBox1Select(TObject *Sender)
{
    if(ComboBox1->ItemIndex==0) // Auto detect
    {
        MessageBeep(0) ;
        if(MessageDlg("USB�� �ڵ����� �����մϴ�.\nAre you sure you want to continue?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
        {
            ShellExecute(NULL,"open","detect-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
            ::Sleep(1000);
            Memo1->Clear() ;
            Memo1->Lines->LoadFromFile("usb.txt") ;
            if(Memo1->Text.SubString(1,1)==0)
            {
                MessageBeep(0) ;
                ShowMessage("Not Found\n\nAuto detect�� SSW USB Unlock�� USB�� ã�� ������� ���� SSW USB Unlock������ ������ ���� USB���� ����Ͻ� �� �����ϴ�.\n���� USB�� SSW USB Unlock������ ������ �ʾҴٸ� USB�� �������� ������ �ּ���.") ;
                ComboBox1->Text="USB Drive" ;
            }
            else
            {
                usb=Memo1->Text.SubString(1,2) ;
                ComboBox1->Text=usb ;
            }
        }
    }
    else
    {
        usb=ComboBox1->Text+":" ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender) // Make
{
    if(LabeledEdit1->Text!="" && LabeledEdit2->Text!="")
    {
        if(usb==0)
        {
            MessageBeep(0) ;
            ShowMessage("Show me the USB.") ;
        }
        else
        {
            if(LabeledEdit1->Text==LabeledEdit2->Text)
            {
                int i ;
                char c[256] ;
                AnsiString a ;
                memset(c,0x00,256) ;
                memcpy(c,LabeledEdit1->Text.c_str(),strlen(LabeledEdit1->Text.c_str())) ;
                for(int f=0;f<=255;f++)
                {
                    if(int(c[f])!=0)
                    {
                        i=int(c[f]) ;
                        a+=IntToStr(i) ;
                    }
                }
                Memo1->Clear() ;
                Memo1->Text=a ;
                Memo1->Lines->SaveToFile(usb+"\\"+username+".ssw") ;
                ShellExecute(NULL,"open","make-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
                MessageBeep(0) ;
                ShowMessage("Success!") ;
                system("echo %date% %time% %username%���� SSW USB Unlock�� USB�� ����̽��ϴ�. >> log.txt") ;
            }
            else
            {
                MessageBeep(0) ;
                ShowMessage("Please check the password") ;
                LabeledEdit1->Clear() ;
                LabeledEdit2->Clear() ;
            }
        }
    }
    else
    {
        MessageBeep(0) ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender) // Edit
{
    if(LabeledEdit3->Text!="" && LabeledEdit4->Text!="" && LabeledEdit5->Text!="")
    {
        if(usb==0)
        {
            MessageBeep(0) ;
            ShowMessage("Show me the USB.") ;
        }
        else
        {
            int i ;
            char c[256] ;
            AnsiString a ;
            memset(c,0x00,256) ;
            memcpy(c,LabeledEdit3->Text.c_str(),strlen(LabeledEdit3->Text.c_str())) ;
            for(int f=0;f<=255;f++)
            {
                if(int(c[f])!=0)
                {
                    i=int(c[f]) ;
                    a+=IntToStr(i) ;
                }
            }
            Memo1->Clear() ;
            ShellExecute(NULL,"open","unlock-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
            Memo1->Lines->LoadFromFile(usb+"\\"+username+".ssw") ;
            ShellExecute(NULL,"open","make-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
            AnsiString b=Memo1->Text ;
            if(a==b)
            {
                if(LabeledEdit4->Text==LabeledEdit5->Text)
                {
                    AnsiString a="" ;
                    memset(c,0x00,256) ;
                    memcpy(c,LabeledEdit4->Text.c_str(),strlen(LabeledEdit4->Text.c_str())) ;
                    for(int f=0;f<=255;f++)
                    {
                        if(int(c[f])!=0)
                        {
                            i=int(c[f]) ;
                            a+=IntToStr(i) ;
                        }
                    }
                    Memo1->Clear() ;
                    Memo1->Text=a ;
                    Memo1->Lines->SaveToFile(usb+"\\"+username+".ssw") ;
                    ShellExecute(NULL,"open","make-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
                    MessageBeep(0) ;
                    ShowMessage("Success!") ;
                    system("echo %date% %time% %username%���� SSW USB Unlock�� USB�� ��ȣ�� �����ϼ̽��ϴ�. >> log.txt") ;
                }
                else
                {
                    MessageBeep(0) ;
                    ShowMessage("Please check the password.") ;
                }
            }
            else
            {
                MessageBeep(0) ;
                ShowMessage("Please check the password.") ;
            }
        }
    }
    else
    {
        MessageBeep(0) ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender) // Remove
{
    if(LabeledEdit6->Text!="")
    {
        if(usb==0)
        {
            MessageBeep(0) ;
            ShowMessage("Show me the USB.") ;
        }
        else
        {
            int i ;
            char c[256] ;
            AnsiString a ;
            memset(c,0x00,256) ;
            memcpy(c,LabeledEdit6->Text.c_str(),strlen(LabeledEdit6->Text.c_str())) ;
            for(int f=0;f<=255;f++)
            {
                if(int(c[f])!=0)
                {
                    i=int(c[f]) ;
                    a+=IntToStr(i) ;
                }
            }
            Memo1->Clear() ;
            ShellExecute(NULL,"open","unlock-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
            Memo1->Lines->LoadFromFile(usb+"\\"+username+".ssw") ;
            ShellExecute(NULL,"open","make-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
            AnsiString b=Memo1->Text ;
            if(a==b)
            {
                MessageBeep(0) ;
                if(MessageDlg("������ ����?",mtConfirmation,TMsgDlgButtons()<<mbYes<<mbNo,0)==mrYes)
                {
                    ShellExecute(NULL,"open","remove-ssw-usb.cmd",NULL,NULL,SW_SHOWMINIMIZED) ;
                    MessageBeep(0) ;
                    ShowMessage("Success!") ;
                    system("echo %date% %time% %username%���� USB Unlock ������ �����ϼ̽��ϴ�. >> log.txt") ;
                }
            }
            else
            {
                MessageBeep(0) ;
                ShowMessage("Please check the password.") ;
            }
        }
    }
    else
    {
        MessageBeep(0) ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormShow(TObject *Sender)
{
        DWORD Drives = GetLogicalDrives();
         for(int Drv=0; Drv<26; Drv++)
        if((Drives >> Drv) & 0x00000001)
           ComboBox1->Items->Add((char)(Drv + 'A'));
    char c[1024] ;
    DWORD dwLength ;
    GetUserName(c,&dwLength) ;
    c[dwLength]=0 ;
    username=c ;

}
//---------------------------------------------------------------------------

