//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdIPWatch.hpp>
#include <ComCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TImage *Image2;
        TIdIPWatch *IdIPWatch1;
        TStatusBar *StatusBar1;
        TPanel *Panel1;
        TButton *Button2;
        TButton *Button3;
        TImage *Image4;
        TLabel *Label2;
        TLabel *Label3;
        TEdit *Edit1;
        TEdit *Edit2;
        TLabel *Label4;
        TPanel *Panel2;
        TMemo *Memo1;
        TImage *Image5;
        TLabel *Label5;
        TPanel *Panel3;
        TImage *Image6;
        TLabel *Label1;
        TLabel *Label6;
        TPanel *Panel4;
        TImage *Image7;
        TLabel *Label7;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TRadioButton *RadioButton3;
        TCheckBox *CheckBox1;
        TPanel *Panel5;
        TLabel *Label9;
        TLabel *Label8;
        TImage *Image3;
        TPanel *Panel6;
        TImage *Image1;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
    TButton *Button1;
    void __fastcall RadioButton1Click(TObject *Sender);
    void __fastcall RadioButton2Click(TObject *Sender);
    void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall Image3Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
