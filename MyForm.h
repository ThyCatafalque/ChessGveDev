#pragma once
#include "Classes.h"
namespace ChessGameDev {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Game* Match = &Game(PVP);
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//		Add array of Pieces
			//		При ходе 
			//      {
			//			Нажата клетка -> если не пустая, то проверяем Side == turn,
			//			дальше искать соответсвие между фигурами и тегом ImageBox'а,
			//			потом проверяем isMoveApproved, дальше Move и Draw каждого хода
			//			
			//			
			//		}
			//
			Match->CreatePiece("King", { 1,1 }, White, 0); //0
			//Match->CreatePiece("Pawn", { 1,2 }, White, 1);
			DeskDraw();
		}
		void DeskDraw()
		{
			for (int i = 0; i < 1; i++)
			{
				CellDraw((Match->getPiece(i)));
			}
		}
		void CellDraw(Piece* piece)
		{
			PictureBox^ pb = (PictureBox^)this->Controls->Find("pictureBox"+Converting(piece->getPosition()), true)[0];
			System::Resources::ResourceManager^ rm = gcnew System::Resources::ResourceManager("ChessGameDev.Resource", GetType()->Assembly);
			pb->Image = safe_cast<Image^>(rm->GetObject(piece->getSide()+piece->getType()));
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  button1;
	protected:
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::PictureBox^  pictureBoxG8;
	public: System::Windows::Forms::PictureBox^  pictureBoxH8;


	public: System::Windows::Forms::PictureBox^  pictureBoxE8;
	public: System::Windows::Forms::PictureBox^  pictureBoxF8;


	public: System::Windows::Forms::PictureBox^  pictureBoxC8;
	public: System::Windows::Forms::PictureBox^  pictureBoxD8;


	public: System::Windows::Forms::PictureBox^  pictureBoxA8;
	public: System::Windows::Forms::PictureBox^  pictureBoxB8;
	public: System::Windows::Forms::PictureBox^  pictureBoxH7;

	public: System::Windows::Forms::PictureBox^  pictureBoxG7;

	public: System::Windows::Forms::PictureBox^  pictureBoxF7;

	public: System::Windows::Forms::PictureBox^  pictureBoxE7;

	public: System::Windows::Forms::PictureBox^  pictureBoxD7;

	public: System::Windows::Forms::PictureBox^  pictureBoxC7;

	public: System::Windows::Forms::PictureBox^  pictureBoxB7;
	public: System::Windows::Forms::PictureBox^  pictureBoxA7;
	public: System::Windows::Forms::PictureBox^  pictureBoxG6;
	public: System::Windows::Forms::PictureBox^  pictureBoxH6;


	public: System::Windows::Forms::PictureBox^  pictureBoxE6;
	public: System::Windows::Forms::PictureBox^  pictureBoxF6;


	public: System::Windows::Forms::PictureBox^  pictureBoxC6;
	public: System::Windows::Forms::PictureBox^  pictureBoxD6;


	public: System::Windows::Forms::PictureBox^  pictureBoxA6;
	public: System::Windows::Forms::PictureBox^  pictureBoxB6;
	public: System::Windows::Forms::PictureBox^  pictureBoxH5;

	public: System::Windows::Forms::PictureBox^  pictureBoxG5;

	public: System::Windows::Forms::PictureBox^  pictureBoxF5;

	public: System::Windows::Forms::PictureBox^  pictureBoxE5;

	public: System::Windows::Forms::PictureBox^  pictureBoxD5;

	public: System::Windows::Forms::PictureBox^  pictureBoxC5;

	public: System::Windows::Forms::PictureBox^  pictureBoxB5;
	public: System::Windows::Forms::PictureBox^  pictureBoxA5;
	public: System::Windows::Forms::PictureBox^  pictureBoxG4;
public: System::Windows::Forms::PictureBox^  pictureBoxH4;


	public: System::Windows::Forms::PictureBox^  pictureBoxE4;
	public: System::Windows::Forms::PictureBox^  pictureBoxF4;


	public: System::Windows::Forms::PictureBox^  pictureBoxC4;
	public: System::Windows::Forms::PictureBox^  pictureBoxD4;


	public: System::Windows::Forms::PictureBox^  pictureBoxA4;
	public: System::Windows::Forms::PictureBox^  pictureBoxB4;
public: System::Windows::Forms::PictureBox^  pictureBoxH3;

public: System::Windows::Forms::PictureBox^  pictureBoxG3;

public: System::Windows::Forms::PictureBox^  pictureBoxF3;

public: System::Windows::Forms::PictureBox^  pictureBoxE3;

	public: System::Windows::Forms::PictureBox^  pictureBoxD3;

	public: System::Windows::Forms::PictureBox^  pictureBoxC3;

	public: System::Windows::Forms::PictureBox^  pictureBoxB3;
	public: System::Windows::Forms::PictureBox^  pictureBoxA3;
public: System::Windows::Forms::PictureBox^  pictureBoxG2;
public: System::Windows::Forms::PictureBox^  pictureBoxH2;


public: System::Windows::Forms::PictureBox^  pictureBoxE2;
public: System::Windows::Forms::PictureBox^  pictureBoxF2;


public: System::Windows::Forms::PictureBox^  pictureBoxC2;
public: System::Windows::Forms::PictureBox^  pictureBoxD2;


	public: System::Windows::Forms::PictureBox^  pictureBoxA2;
	public: System::Windows::Forms::PictureBox^  pictureBoxB2;
public: System::Windows::Forms::PictureBox^  pictureBoxH1;

public: System::Windows::Forms::PictureBox^  pictureBoxG1;

public: System::Windows::Forms::PictureBox^  pictureBoxF1;

public: System::Windows::Forms::PictureBox^  pictureBoxE1;

public: System::Windows::Forms::PictureBox^  pictureBoxD1;

public: System::Windows::Forms::PictureBox^  pictureBoxC1;

	public: System::Windows::Forms::PictureBox^  pictureBoxB1;
	public: System::Windows::Forms::PictureBox^  pictureBoxA1;
	private: System::Windows::Forms::Label^  label2;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxG8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxH1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxG1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxF1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxE1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxD1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxC1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxB1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxA1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// pictureBoxG8
			// 
			this->pictureBoxG8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxG8->Location = System::Drawing::Point(441, 93);
			this->pictureBoxG8->Name = L"pictureBoxG8";
			this->pictureBoxG8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG8->TabIndex = 17;
			this->pictureBoxG8->TabStop = false;
			this->pictureBoxG8->Tag = L"G8";
			// 
			// pictureBoxH8
			// 
			this->pictureBoxH8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxH8->Location = System::Drawing::Point(497, 93);
			this->pictureBoxH8->Name = L"pictureBoxH8";
			this->pictureBoxH8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH8->TabIndex = 16;
			this->pictureBoxH8->TabStop = false;
			this->pictureBoxH8->Tag = L"H8";
			// 
			// pictureBoxE8
			// 
			this->pictureBoxE8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxE8->Location = System::Drawing::Point(329, 93);
			this->pictureBoxE8->Name = L"pictureBoxE8";
			this->pictureBoxE8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE8->TabIndex = 15;
			this->pictureBoxE8->TabStop = false;
			this->pictureBoxE8->Tag = L"E8";
			// 
			// pictureBoxF8
			// 
			this->pictureBoxF8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxF8->Location = System::Drawing::Point(385, 93);
			this->pictureBoxF8->Name = L"pictureBoxF8";
			this->pictureBoxF8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF8->TabIndex = 14;
			this->pictureBoxF8->TabStop = false;
			this->pictureBoxF8->Tag = L"F8";
			// 
			// pictureBoxC8
			// 
			this->pictureBoxC8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxC8->Location = System::Drawing::Point(217, 93);
			this->pictureBoxC8->Name = L"pictureBoxC8";
			this->pictureBoxC8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC8->TabIndex = 13;
			this->pictureBoxC8->TabStop = false;
			this->pictureBoxC8->Tag = L"C8";
			// 
			// pictureBoxD8
			// 
			this->pictureBoxD8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxD8->Location = System::Drawing::Point(273, 93);
			this->pictureBoxD8->Name = L"pictureBoxD8";
			this->pictureBoxD8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD8->TabIndex = 12;
			this->pictureBoxD8->TabStop = false;
			this->pictureBoxD8->Tag = L"D8";
			// 
			// pictureBoxA8
			// 
			this->pictureBoxA8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxA8->Location = System::Drawing::Point(105, 93);
			this->pictureBoxA8->Name = L"pictureBoxA8";
			this->pictureBoxA8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA8->TabIndex = 11;
			this->pictureBoxA8->TabStop = false;
			this->pictureBoxA8->Tag = L"A8";
			// 
			// pictureBoxB8
			// 
			this->pictureBoxB8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxB8->Location = System::Drawing::Point(161, 93);
			this->pictureBoxB8->Name = L"pictureBoxB8";
			this->pictureBoxB8->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB8->TabIndex = 10;
			this->pictureBoxB8->TabStop = false;
			this->pictureBoxB8->Tag = L"B8";
			// 
			// pictureBoxH7
			// 
			this->pictureBoxH7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxH7->Location = System::Drawing::Point(497, 149);
			this->pictureBoxH7->Name = L"pictureBoxH7";
			this->pictureBoxH7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH7->TabIndex = 25;
			this->pictureBoxH7->TabStop = false;
			this->pictureBoxH7->Tag = L"H7";
			// 
			// pictureBoxG7
			// 
			this->pictureBoxG7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxG7->Location = System::Drawing::Point(441, 149);
			this->pictureBoxG7->Name = L"pictureBoxG7";
			this->pictureBoxG7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG7->TabIndex = 24;
			this->pictureBoxG7->TabStop = false;
			this->pictureBoxG7->Tag = L"G7";
			// 
			// pictureBoxF7
			// 
			this->pictureBoxF7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxF7->Location = System::Drawing::Point(385, 149);
			this->pictureBoxF7->Name = L"pictureBoxF7";
			this->pictureBoxF7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF7->TabIndex = 23;
			this->pictureBoxF7->TabStop = false;
			this->pictureBoxF7->Tag = L"7";
			// 
			// pictureBoxE7
			// 
			this->pictureBoxE7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxE7->Location = System::Drawing::Point(329, 149);
			this->pictureBoxE7->Name = L"pictureBoxE7";
			this->pictureBoxE7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE7->TabIndex = 22;
			this->pictureBoxE7->TabStop = false;
			this->pictureBoxE7->Tag = L"E7";
			// 
			// pictureBoxD7
			// 
			this->pictureBoxD7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxD7->Location = System::Drawing::Point(273, 149);
			this->pictureBoxD7->Name = L"pictureBoxD7";
			this->pictureBoxD7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD7->TabIndex = 21;
			this->pictureBoxD7->TabStop = false;
			this->pictureBoxD7->Tag = L"D7";
			// 
			// pictureBoxC7
			// 
			this->pictureBoxC7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxC7->Location = System::Drawing::Point(217, 149);
			this->pictureBoxC7->Name = L"pictureBoxC7";
			this->pictureBoxC7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC7->TabIndex = 20;
			this->pictureBoxC7->TabStop = false;
			this->pictureBoxC7->Tag = L"C7";
			// 
			// pictureBoxB7
			// 
			this->pictureBoxB7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxB7->Location = System::Drawing::Point(161, 149);
			this->pictureBoxB7->Name = L"pictureBoxB7";
			this->pictureBoxB7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB7->TabIndex = 19;
			this->pictureBoxB7->TabStop = false;
			this->pictureBoxB7->Tag = L"B7";
			// 
			// pictureBoxA7
			// 
			this->pictureBoxA7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxA7->Location = System::Drawing::Point(105, 149);
			this->pictureBoxA7->Name = L"pictureBoxA7";
			this->pictureBoxA7->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA7->TabIndex = 18;
			this->pictureBoxA7->TabStop = false;
			this->pictureBoxA7->Tag = L"A7";
			// 
			// pictureBoxG6
			// 
			this->pictureBoxG6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxG6->Location = System::Drawing::Point(441, 205);
			this->pictureBoxG6->Name = L"pictureBoxG6";
			this->pictureBoxG6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG6->TabIndex = 33;
			this->pictureBoxG6->TabStop = false;
			this->pictureBoxG6->Tag = L"G6";
			// 
			// pictureBoxH6
			// 
			this->pictureBoxH6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxH6->Location = System::Drawing::Point(497, 205);
			this->pictureBoxH6->Name = L"pictureBoxH6";
			this->pictureBoxH6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH6->TabIndex = 32;
			this->pictureBoxH6->TabStop = false;
			this->pictureBoxH6->Tag = L"H6";
			// 
			// pictureBoxE6
			// 
			this->pictureBoxE6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxE6->Location = System::Drawing::Point(329, 205);
			this->pictureBoxE6->Name = L"pictureBoxE6";
			this->pictureBoxE6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE6->TabIndex = 31;
			this->pictureBoxE6->TabStop = false;
			this->pictureBoxE6->Tag = L"E6";
			// 
			// pictureBoxF6
			// 
			this->pictureBoxF6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxF6->Location = System::Drawing::Point(385, 205);
			this->pictureBoxF6->Name = L"pictureBoxF6";
			this->pictureBoxF6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF6->TabIndex = 30;
			this->pictureBoxF6->TabStop = false;
			this->pictureBoxF6->Tag = L"F6";
			// 
			// pictureBoxC6
			// 
			this->pictureBoxC6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxC6->Location = System::Drawing::Point(217, 205);
			this->pictureBoxC6->Name = L"pictureBoxC6";
			this->pictureBoxC6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC6->TabIndex = 29;
			this->pictureBoxC6->TabStop = false;
			this->pictureBoxC6->Tag = L"C6";
			// 
			// pictureBoxD6
			// 
			this->pictureBoxD6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxD6->Location = System::Drawing::Point(273, 205);
			this->pictureBoxD6->Name = L"pictureBoxD6";
			this->pictureBoxD6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD6->TabIndex = 28;
			this->pictureBoxD6->TabStop = false;
			this->pictureBoxD6->Tag = L"D6";
			// 
			// pictureBoxA6
			// 
			this->pictureBoxA6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxA6->Location = System::Drawing::Point(105, 205);
			this->pictureBoxA6->Name = L"pictureBoxA6";
			this->pictureBoxA6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA6->TabIndex = 27;
			this->pictureBoxA6->TabStop = false;
			this->pictureBoxA6->Tag = L"A6";
			// 
			// pictureBoxB6
			// 
			this->pictureBoxB6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxB6->Location = System::Drawing::Point(161, 205);
			this->pictureBoxB6->Name = L"pictureBoxB6";
			this->pictureBoxB6->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB6->TabIndex = 26;
			this->pictureBoxB6->TabStop = false;
			this->pictureBoxB6->Tag = L"B6";
			// 
			// pictureBoxH5
			// 
			this->pictureBoxH5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxH5->Location = System::Drawing::Point(497, 261);
			this->pictureBoxH5->Name = L"pictureBoxH5";
			this->pictureBoxH5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH5->TabIndex = 41;
			this->pictureBoxH5->TabStop = false;
			this->pictureBoxH5->Tag = L"H5";
			// 
			// pictureBoxG5
			// 
			this->pictureBoxG5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxG5->Location = System::Drawing::Point(441, 261);
			this->pictureBoxG5->Name = L"pictureBoxG5";
			this->pictureBoxG5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG5->TabIndex = 40;
			this->pictureBoxG5->TabStop = false;
			this->pictureBoxG5->Tag = L"G5";
			// 
			// pictureBoxF5
			// 
			this->pictureBoxF5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxF5->Location = System::Drawing::Point(385, 261);
			this->pictureBoxF5->Name = L"pictureBoxF5";
			this->pictureBoxF5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF5->TabIndex = 39;
			this->pictureBoxF5->TabStop = false;
			this->pictureBoxF5->Tag = L"F5";
			// 
			// pictureBoxE5
			// 
			this->pictureBoxE5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxE5->Location = System::Drawing::Point(329, 261);
			this->pictureBoxE5->Name = L"pictureBoxE5";
			this->pictureBoxE5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE5->TabIndex = 38;
			this->pictureBoxE5->TabStop = false;
			this->pictureBoxE5->Tag = L"E5";
			// 
			// pictureBoxD5
			// 
			this->pictureBoxD5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxD5->Location = System::Drawing::Point(273, 261);
			this->pictureBoxD5->Name = L"pictureBoxD5";
			this->pictureBoxD5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD5->TabIndex = 37;
			this->pictureBoxD5->TabStop = false;
			this->pictureBoxD5->Tag = L"D5";
			// 
			// pictureBoxC5
			// 
			this->pictureBoxC5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxC5->Location = System::Drawing::Point(217, 261);
			this->pictureBoxC5->Name = L"pictureBoxC5";
			this->pictureBoxC5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC5->TabIndex = 36;
			this->pictureBoxC5->TabStop = false;
			this->pictureBoxC5->Tag = L"C5";
			// 
			// pictureBoxB5
			// 
			this->pictureBoxB5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxB5->Location = System::Drawing::Point(161, 261);
			this->pictureBoxB5->Name = L"pictureBoxB5";
			this->pictureBoxB5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB5->TabIndex = 35;
			this->pictureBoxB5->TabStop = false;
			this->pictureBoxB5->Tag = L"B5";
			// 
			// pictureBoxA5
			// 
			this->pictureBoxA5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxA5->Location = System::Drawing::Point(105, 261);
			this->pictureBoxA5->Name = L"pictureBoxA5";
			this->pictureBoxA5->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA5->TabIndex = 34;
			this->pictureBoxA5->TabStop = false;
			this->pictureBoxA5->Tag = L"A5";
			// 
			// pictureBoxG4
			// 
			this->pictureBoxG4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxG4->Location = System::Drawing::Point(441, 317);
			this->pictureBoxG4->Name = L"pictureBoxG4";
			this->pictureBoxG4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG4->TabIndex = 49;
			this->pictureBoxG4->TabStop = false;
			this->pictureBoxG4->Tag = L"G4";
			// 
			// pictureBoxH4
			// 
			this->pictureBoxH4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxH4->Location = System::Drawing::Point(497, 317);
			this->pictureBoxH4->Name = L"pictureBoxH4";
			this->pictureBoxH4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH4->TabIndex = 48;
			this->pictureBoxH4->TabStop = false;
			this->pictureBoxH4->Tag = L"H4";
			// 
			// pictureBoxE4
			// 
			this->pictureBoxE4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxE4->Location = System::Drawing::Point(329, 317);
			this->pictureBoxE4->Name = L"pictureBoxE4";
			this->pictureBoxE4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE4->TabIndex = 47;
			this->pictureBoxE4->TabStop = false;
			this->pictureBoxE4->Tag = L"E4";
			// 
			// pictureBoxF4
			// 
			this->pictureBoxF4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxF4->Location = System::Drawing::Point(385, 317);
			this->pictureBoxF4->Name = L"pictureBoxF4";
			this->pictureBoxF4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF4->TabIndex = 46;
			this->pictureBoxF4->TabStop = false;
			this->pictureBoxF4->Tag = L"F4";
			// 
			// pictureBoxC4
			// 
			this->pictureBoxC4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxC4->Location = System::Drawing::Point(217, 317);
			this->pictureBoxC4->Name = L"pictureBoxC4";
			this->pictureBoxC4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC4->TabIndex = 45;
			this->pictureBoxC4->TabStop = false;
			this->pictureBoxC4->Tag = L"C4";
			// 
			// pictureBoxD4
			// 
			this->pictureBoxD4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxD4->Location = System::Drawing::Point(273, 317);
			this->pictureBoxD4->Name = L"pictureBoxD4";
			this->pictureBoxD4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD4->TabIndex = 44;
			this->pictureBoxD4->TabStop = false;
			this->pictureBoxD4->Tag = L"D4";
			// 
			// pictureBoxA4
			// 
			this->pictureBoxA4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxA4->Location = System::Drawing::Point(105, 317);
			this->pictureBoxA4->Name = L"pictureBoxA4";
			this->pictureBoxA4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA4->TabIndex = 43;
			this->pictureBoxA4->TabStop = false;
			this->pictureBoxA4->Tag = L"A4";
			// 
			// pictureBoxB4
			// 
			this->pictureBoxB4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxB4->Location = System::Drawing::Point(161, 317);
			this->pictureBoxB4->Name = L"pictureBoxB4";
			this->pictureBoxB4->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB4->TabIndex = 42;
			this->pictureBoxB4->TabStop = false;
			this->pictureBoxB4->Tag = L"B4";
			// 
			// pictureBoxH3
			// 
			this->pictureBoxH3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxH3->Location = System::Drawing::Point(497, 373);
			this->pictureBoxH3->Name = L"pictureBoxH3";
			this->pictureBoxH3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH3->TabIndex = 57;
			this->pictureBoxH3->TabStop = false;
			this->pictureBoxH3->Tag = L"H3";
			// 
			// pictureBoxG3
			// 
			this->pictureBoxG3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxG3->Location = System::Drawing::Point(441, 373);
			this->pictureBoxG3->Name = L"pictureBoxG3";
			this->pictureBoxG3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG3->TabIndex = 56;
			this->pictureBoxG3->TabStop = false;
			this->pictureBoxG3->Tag = L"G3";
			// 
			// pictureBoxF3
			// 
			this->pictureBoxF3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxF3->Location = System::Drawing::Point(385, 373);
			this->pictureBoxF3->Name = L"pictureBoxF3";
			this->pictureBoxF3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF3->TabIndex = 55;
			this->pictureBoxF3->TabStop = false;
			this->pictureBoxF3->Tag = L"F3";
			// 
			// pictureBoxE3
			// 
			this->pictureBoxE3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxE3->Location = System::Drawing::Point(329, 373);
			this->pictureBoxE3->Name = L"pictureBoxE3";
			this->pictureBoxE3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE3->TabIndex = 54;
			this->pictureBoxE3->TabStop = false;
			this->pictureBoxE3->Tag = L"E3";
			// 
			// pictureBoxD3
			// 
			this->pictureBoxD3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxD3->Location = System::Drawing::Point(273, 373);
			this->pictureBoxD3->Name = L"pictureBoxD3";
			this->pictureBoxD3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD3->TabIndex = 53;
			this->pictureBoxD3->TabStop = false;
			this->pictureBoxD3->Tag = L"D3";
			// 
			// pictureBoxC3
			// 
			this->pictureBoxC3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxC3->Location = System::Drawing::Point(217, 373);
			this->pictureBoxC3->Name = L"pictureBoxC3";
			this->pictureBoxC3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC3->TabIndex = 52;
			this->pictureBoxC3->TabStop = false;
			this->pictureBoxC3->Tag = L"C3";
			// 
			// pictureBoxB3
			// 
			this->pictureBoxB3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxB3->Location = System::Drawing::Point(161, 373);
			this->pictureBoxB3->Name = L"pictureBoxB3";
			this->pictureBoxB3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB3->TabIndex = 51;
			this->pictureBoxB3->TabStop = false;
			this->pictureBoxB3->Tag = L"B3";
			// 
			// pictureBoxA3
			// 
			this->pictureBoxA3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxA3->Location = System::Drawing::Point(105, 373);
			this->pictureBoxA3->Name = L"pictureBoxA3";
			this->pictureBoxA3->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA3->TabIndex = 50;
			this->pictureBoxA3->TabStop = false;
			this->pictureBoxA3->Tag = L"A3";
			// 
			// pictureBoxG2
			// 
			this->pictureBoxG2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxG2->Location = System::Drawing::Point(441, 429);
			this->pictureBoxG2->Name = L"pictureBoxG2";
			this->pictureBoxG2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG2->TabIndex = 65;
			this->pictureBoxG2->TabStop = false;
			this->pictureBoxG2->Tag = L"G2";
			// 
			// pictureBoxH2
			// 
			this->pictureBoxH2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxH2->Location = System::Drawing::Point(497, 429);
			this->pictureBoxH2->Name = L"pictureBoxH2";
			this->pictureBoxH2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH2->TabIndex = 64;
			this->pictureBoxH2->TabStop = false;
			this->pictureBoxH2->Tag = L"H2";
			// 
			// pictureBoxE2
			// 
			this->pictureBoxE2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxE2->Location = System::Drawing::Point(329, 429);
			this->pictureBoxE2->Name = L"pictureBoxE2";
			this->pictureBoxE2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE2->TabIndex = 63;
			this->pictureBoxE2->TabStop = false;
			this->pictureBoxE2->Tag = L"E2";
			// 
			// pictureBoxF2
			// 
			this->pictureBoxF2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxF2->Location = System::Drawing::Point(385, 429);
			this->pictureBoxF2->Name = L"pictureBoxF2";
			this->pictureBoxF2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF2->TabIndex = 62;
			this->pictureBoxF2->TabStop = false;
			this->pictureBoxF2->Tag = L"F2";
			// 
			// pictureBoxC2
			// 
			this->pictureBoxC2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxC2->Location = System::Drawing::Point(217, 429);
			this->pictureBoxC2->Name = L"pictureBoxC2";
			this->pictureBoxC2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC2->TabIndex = 61;
			this->pictureBoxC2->TabStop = false;
			this->pictureBoxC2->Tag = L"C2";
			// 
			// pictureBoxD2
			// 
			this->pictureBoxD2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxD2->Location = System::Drawing::Point(273, 429);
			this->pictureBoxD2->Name = L"pictureBoxD2";
			this->pictureBoxD2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD2->TabIndex = 60;
			this->pictureBoxD2->TabStop = false;
			this->pictureBoxD2->Tag = L"D2";
			// 
			// pictureBoxA2
			// 
			this->pictureBoxA2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxA2->Location = System::Drawing::Point(105, 429);
			this->pictureBoxA2->Name = L"pictureBoxA2";
			this->pictureBoxA2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA2->TabIndex = 59;
			this->pictureBoxA2->TabStop = false;
			this->pictureBoxA2->Tag = L"A2";
			// 
			// pictureBoxB2
			// 
			this->pictureBoxB2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxB2->Location = System::Drawing::Point(161, 429);
			this->pictureBoxB2->Name = L"pictureBoxB2";
			this->pictureBoxB2->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB2->TabIndex = 58;
			this->pictureBoxB2->TabStop = false;
			this->pictureBoxB2->Tag = L"B2";
			// 
			// pictureBoxH1
			// 
			this->pictureBoxH1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxH1->Location = System::Drawing::Point(497, 485);
			this->pictureBoxH1->Name = L"pictureBoxH1";
			this->pictureBoxH1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxH1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxH1->TabIndex = 73;
			this->pictureBoxH1->TabStop = false;
			this->pictureBoxH1->Tag = L"H1";
			// 
			// pictureBoxG1
			// 
			this->pictureBoxG1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxG1->Location = System::Drawing::Point(441, 485);
			this->pictureBoxG1->Name = L"pictureBoxG1";
			this->pictureBoxG1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxG1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxG1->TabIndex = 72;
			this->pictureBoxG1->TabStop = false;
			this->pictureBoxG1->Tag = L"G1";
			// 
			// pictureBoxF1
			// 
			this->pictureBoxF1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxF1->Location = System::Drawing::Point(385, 485);
			this->pictureBoxF1->Name = L"pictureBoxF1";
			this->pictureBoxF1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxF1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxF1->TabIndex = 71;
			this->pictureBoxF1->TabStop = false;
			this->pictureBoxF1->Tag = L"F1";
			// 
			// pictureBoxE1
			// 
			this->pictureBoxE1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxE1->Location = System::Drawing::Point(329, 485);
			this->pictureBoxE1->Name = L"pictureBoxE1";
			this->pictureBoxE1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxE1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxE1->TabIndex = 70;
			this->pictureBoxE1->TabStop = false;
			this->pictureBoxE1->Tag = L"E1";
			// 
			// pictureBoxD1
			// 
			this->pictureBoxD1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxD1->Location = System::Drawing::Point(273, 485);
			this->pictureBoxD1->Name = L"pictureBoxD1";
			this->pictureBoxD1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxD1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxD1->TabIndex = 69;
			this->pictureBoxD1->TabStop = false;
			this->pictureBoxD1->Tag = L"D1";
			// 
			// pictureBoxC1
			// 
			this->pictureBoxC1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxC1->Location = System::Drawing::Point(217, 485);
			this->pictureBoxC1->Name = L"pictureBoxC1";
			this->pictureBoxC1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxC1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxC1->TabIndex = 68;
			this->pictureBoxC1->TabStop = false;
			this->pictureBoxC1->Tag = L"C1";
			// 
			// pictureBoxB1
			// 
			this->pictureBoxB1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBoxB1->Location = System::Drawing::Point(161, 485);
			this->pictureBoxB1->Name = L"pictureBoxB1";
			this->pictureBoxB1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxB1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxB1->TabIndex = 67;
			this->pictureBoxB1->TabStop = false;
			this->pictureBoxB1->Tag = L"B1";
			// 
			// pictureBoxA1
			// 
			this->pictureBoxA1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxA1->Location = System::Drawing::Point(105, 485);
			this->pictureBoxA1->Name = L"pictureBoxA1";
			this->pictureBoxA1->Size = System::Drawing::Size(50, 50);
			this->pictureBoxA1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxA1->TabIndex = 66;
			this->pictureBoxA1->TabStop = false;
			this->pictureBoxA1->Tag = L"A1";
			this->pictureBoxA1->Click += gcnew System::EventHandler(this, &MyForm::pictureBoxA1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 538);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 42);
			this->label2->TabIndex = 74;
			this->label2->Text = L"A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(167, 538);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 42);
			this->label3->TabIndex = 75;
			this->label3->Text = L"B";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(223, 538);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 42);
			this->label4->TabIndex = 76;
			this->label4->Text = L"C";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(279, 538);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 42);
			this->label5->TabIndex = 77;
			this->label5->Text = L"D";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(335, 538);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 42);
			this->label6->TabIndex = 78;
			this->label6->Text = L"E";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(391, 538);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 42);
			this->label7->TabIndex = 79;
			this->label7->Text = L"F";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(447, 538);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 42);
			this->label8->TabIndex = 80;
			this->label8->Text = L"G";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(503, 538);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 42);
			this->label9->TabIndex = 81;
			this->label9->Text = L"H";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(55, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 42);
			this->label10->TabIndex = 82;
			this->label10->Text = L"8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(55, 157);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(40, 42);
			this->label11->TabIndex = 83;
			this->label11->Text = L"7";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(55, 213);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 42);
			this->label12->TabIndex = 84;
			this->label12->Text = L"6";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(55, 269);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 42);
			this->label13->TabIndex = 85;
			this->label13->Text = L"5";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(55, 325);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 42);
			this->label14->TabIndex = 86;
			this->label14->Text = L"4";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(55, 381);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 42);
			this->label15->TabIndex = 87;
			this->label15->Text = L"3";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(55, 437);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 42);
			this->label16->TabIndex = 88;
			this->label16->Text = L"2";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(55, 493);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 42);
			this->label17->TabIndex = 89;
			this->label17->Text = L"1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 633);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBoxH1);
			this->Controls->Add(this->pictureBoxG1);
			this->Controls->Add(this->pictureBoxF1);
			this->Controls->Add(this->pictureBoxE1);
			this->Controls->Add(this->pictureBoxD1);
			this->Controls->Add(this->pictureBoxC1);
			this->Controls->Add(this->pictureBoxB1);
			this->Controls->Add(this->pictureBoxA1);
			this->Controls->Add(this->pictureBoxG2);
			this->Controls->Add(this->pictureBoxH2);
			this->Controls->Add(this->pictureBoxE2);
			this->Controls->Add(this->pictureBoxF2);
			this->Controls->Add(this->pictureBoxC2);
			this->Controls->Add(this->pictureBoxD2);
			this->Controls->Add(this->pictureBoxA2);
			this->Controls->Add(this->pictureBoxB2);
			this->Controls->Add(this->pictureBoxH3);
			this->Controls->Add(this->pictureBoxG3);
			this->Controls->Add(this->pictureBoxF3);
			this->Controls->Add(this->pictureBoxE3);
			this->Controls->Add(this->pictureBoxD3);
			this->Controls->Add(this->pictureBoxC3);
			this->Controls->Add(this->pictureBoxB3);
			this->Controls->Add(this->pictureBoxA3);
			this->Controls->Add(this->pictureBoxG4);
			this->Controls->Add(this->pictureBoxH4);
			this->Controls->Add(this->pictureBoxE4);
			this->Controls->Add(this->pictureBoxF4);
			this->Controls->Add(this->pictureBoxC4);
			this->Controls->Add(this->pictureBoxD4);
			this->Controls->Add(this->pictureBoxA4);
			this->Controls->Add(this->pictureBoxB4);
			this->Controls->Add(this->pictureBoxH5);
			this->Controls->Add(this->pictureBoxG5);
			this->Controls->Add(this->pictureBoxF5);
			this->Controls->Add(this->pictureBoxE5);
			this->Controls->Add(this->pictureBoxD5);
			this->Controls->Add(this->pictureBoxC5);
			this->Controls->Add(this->pictureBoxB5);
			this->Controls->Add(this->pictureBoxA5);
			this->Controls->Add(this->pictureBoxG6);
			this->Controls->Add(this->pictureBoxH6);
			this->Controls->Add(this->pictureBoxE6);
			this->Controls->Add(this->pictureBoxF6);
			this->Controls->Add(this->pictureBoxC6);
			this->Controls->Add(this->pictureBoxD6);
			this->Controls->Add(this->pictureBoxA6);
			this->Controls->Add(this->pictureBoxB6);
			this->Controls->Add(this->pictureBoxH7);
			this->Controls->Add(this->pictureBoxG7);
			this->Controls->Add(this->pictureBoxF7);
			this->Controls->Add(this->pictureBoxE7);
			this->Controls->Add(this->pictureBoxD7);
			this->Controls->Add(this->pictureBoxC7);
			this->Controls->Add(this->pictureBoxB7);
			this->Controls->Add(this->pictureBoxA7);
			this->Controls->Add(this->pictureBoxG8);
			this->Controls->Add(this->pictureBoxH8);
			this->Controls->Add(this->pictureBoxE8);
			this->Controls->Add(this->pictureBoxF8);
			this->Controls->Add(this->pictureBoxC8);
			this->Controls->Add(this->pictureBoxD8);
			this->Controls->Add(this->pictureBoxA8);
			this->Controls->Add(this->pictureBoxB8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxH1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxG1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxF1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxE1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxD1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxC1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxB1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxA1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Match->move(*Match->getPiece(0), { 1,2 });
		//Match->CreatePiece("King", { 1,1 }, White, 0);
		Match->getPiece(0)->move({ 1,2 });
		DeskDraw();

	}
public: System::Void pictureBoxA1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Match->getPiece(Converting(((PictureBox^)sender)->Tag->ToString()))->move({ 1,2 });
	//MessageBox::Show(Match->getPiece(/*Converting(((PictureBox^)sender)->Tag->ToString()))*/0)->getType());
	//I just wanna push myself through ice to see the world from underwater
	Match->getPiece(0)->move({ 1,3 });
	Match->getPiece(0)->move({ 1,5 });
	DeskDraw();
}
};
}
