//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
    TComboBox *ComboBox1;
    TMemo *Memo1;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TTabSheet *TabSheet3;
    TButton *Button1;
    TLabeledEdit *LabeledEdit1;
    TLabeledEdit *LabeledEdit2;
    TLabeledEdit *LabeledEdit3;
    TLabeledEdit *LabeledEdit4;
    TLabeledEdit *LabeledEdit5;
    TLabeledEdit *LabeledEdit6;
    TButton *Button2;
    TButton *Button3;
        TImage *Image1;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall ComboBox1Select(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
 