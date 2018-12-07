//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "ABOUT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxGraphics"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FileNewExecute(TObject *Sender)
{
	RichEdit1->Clear();
	FileName = "untitled.txt";
	StatusBar1->Panels->Items[0]->Text = FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FileOpen1Accept(TObject *Sender)
{
	RichEdit1->Lines->LoadFromFile(FileOpen1->Dialog->FileName);
	FileName = FileOpen1->Dialog->FileName;
	StatusBar1->Panels->Items[0]->Text = FileName;
	iPos = FileName.LastDelimiter("\\");
	FileName = FileName.SubString(iPos+1, FileName.Length());
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FileSaveExecute(TObject *Sender)
{
	if(FileName == "untitled.txt"){
		FileSaveAs1->Execute();
	}else{
		RichEdit1->Lines->SaveToFile(FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FileSaveAs1BeforeExecute(TObject *Sender)
{
//	iPos = FileName.LastDelimiter("\\");
//	FileName = FileName.SubString(iPos+1, FileName.Length());
//	FileSaveAs1->Dialog->FileName; //= FileName; //ExtractFilePath(FileName);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FileSaveAs1Accept(TObject *Sender)
{

	FileName = FileSaveAs1->Dialog->FileName;                       //파일이름과 경로를 리턴
	RichEdit1->Lines->SaveToFile(FileName);
	StatusBar1->Panels->Items[0]->Text = FileName;
	iPos = FileName.LastDelimiter("\\");
	FileName = FileName.SubString(iPos+1, FileName.Length());

}
//---------------------------------------------------------------------------
void __fastcall TForm2::HelpContents1Execute(TObject *Sender)
{
	const static int HELP_TAB = 15;
	const static int CONTENTS_ACTIVE = -3;

	Application->HelpCommand(HELP_TAB, CONTENTS_ACTIVE);

}
//---------------------------------------------------------------------------
void __fastcall TForm2::HelpIndexExecute(TObject *Sender)
{
	const static int HELP_TAB = 15;
	const static int INDEX_ACTIVE = -2;

	Application->HelpCommand(HELP_TAB, INDEX_ACTIVE);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::HelpAboutExecute(TObject *Sender)
{
	AboutBox->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormCreate(TObject *Sender)
{
	Application->HelpFile = ExtractFilePath(Application->ExeName) + "TextEditor.hlp";
	FileName = "untitled.txt";
	StatusBar1->Panels->Items[0]->Text = FileName;
	RichEdit1->Clear();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
