//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include "cxGraphics.hpp"
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TRichEdit *RichEdit1;
	TStatusBar *StatusBar1;
	TcxImageList *cxImageList1;
	TActionManager *ActionManager1;
	TAction *FileNew;
	TAction *FileSave;
	TAction *HelpIndex;
	TAction *HelpAbout;
	TAction *Action1;
	TEditCut *EditCut1;
	TEditCopy *EditCopy1;
	TEditPaste *EditPaste1;
	TFileOpen *FileOpen1;
	TFileSaveAs *FileSaveAs1;
	TFileExit *FileExit1;
	THelpContents *HelpContents1;
	TActionMainMenuBar *ActionMainMenuBar1;
	TActionToolBar *ActionToolBar1;
	void __fastcall FileNewExecute(TObject *Sender);
	void __fastcall FileOpen1Accept(TObject *Sender);
	void __fastcall FileSaveExecute(TObject *Sender);
	void __fastcall FileSaveAs1BeforeExecute(TObject *Sender);
	void __fastcall FileSaveAs1Accept(TObject *Sender);
	void __fastcall HelpContents1Execute(TObject *Sender);
	void __fastcall HelpIndexExecute(TObject *Sender);
	void __fastcall HelpAboutExecute(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);

private:	// User declarations
	int iPos;
public:		// User declarations
	UnicodeString FileName;
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
