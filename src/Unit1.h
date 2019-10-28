//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "trayicon.h"
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TButton *Button1;
    TTrayIcon *TrayIcon1;
    TPopupMenu *PopupMenu1;
    TTimer *Timer1;
    TMemo *Memo1;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label12;
    TLabel *Label13;
    TLabel *Label14;
    TLabel *Label15;
    TLabel *Label16;
    TLabel *Label17;
    TLabel *Label18;
    TLabel *Label19;
    TLabel *Label20;
    TLabel *Label21;
    TLabel *Label22;
    TLabel *Label23;
    TLabel *Label24;
    TLabel *Label25;
    TLabel *Label26;
    TLabel *Label27;
    TLabel *Label28;
    TLabel *Label30;
    TLabel *Label31;
    TLabel *Label32;
    TLabel *Label33;
    TLabel *Label34;
    TLabel *Label35;
    TLabel *Label36;
    TLabel *Label37;
    TLabel *Label38;
    TLabel *Label39;
    TLabel *Label40;
    TLabel *Label41;
    TLabel *Label42;
    TLabel *Label43;
    TLabel *Label44;
    TLabel *Label45;
    TLabel *Label46;
    TLabel *Label47;
    TLabel *Label48;
    TLabel *Label49;
    TLabel *Label50;
    TLabel *Label51;
    TLabel *Label52;
    TLabel *Label53;
    TLabel *Label54;
    TTimer *Timer2;
        TImage *Image1;
        TLabel *Label29;
        TTimer *Timer3;
        TPanel *Panel1;
        TImage *Image2;
        TLabel *Label3;
        TLabel *Label1;
        TLabel *Label2;
        TEdit *Edit1;
        TCheckBox *CheckBox1;
    TMenuItem *OpenO1;
        TComboBox *ComboBox1;
        TButton *Button2;
    TButton *Button3;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall TrayIcon1Restore(TObject *Sender);
        void __fastcall ComboBox1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
    void __fastcall OpenO1Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
