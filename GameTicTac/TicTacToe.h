#pragma once

namespace GameTicTac {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TicTacToe
	/// </summary>
	public ref class TicTacToe : public System::Windows::Forms::Form
	{


		bool click = 1;
		bool win = 0;

		int Xwin = 0;
		int Owin = 0;
		String^ master = "Nobody";

	public:
		TicTacToe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TicTacToe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  Xcounter;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  Ocounter;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  buttonR;
	private: System::Windows::Forms::PictureBox^  a1;
	private: System::Windows::Forms::PictureBox^  b1;
	private: System::Windows::Forms::PictureBox^  c1;
	private: System::Windows::Forms::PictureBox^  a2;
	private: System::Windows::Forms::PictureBox^  b2;
	private: System::Windows::Forms::PictureBox^  c2;
	private: System::Windows::Forms::PictureBox^  a3;
	private: System::Windows::Forms::PictureBox^  b3;
	private: System::Windows::Forms::PictureBox^  c3;










	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TicTacToe::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Xcounter = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Ocounter = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonR = (gcnew System::Windows::Forms::Button());
			this->a1 = (gcnew System::Windows::Forms::PictureBox());
			this->b1 = (gcnew System::Windows::Forms::PictureBox());
			this->c1 = (gcnew System::Windows::Forms::PictureBox());
			this->a2 = (gcnew System::Windows::Forms::PictureBox());
			this->b2 = (gcnew System::Windows::Forms::PictureBox());
			this->c2 = (gcnew System::Windows::Forms::PictureBox());
			this->a3 = (gcnew System::Windows::Forms::PictureBox());
			this->b3 = (gcnew System::Windows::Forms::PictureBox());
			this->c3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PLAYER X POINTS:";
			// 
			// Xcounter
			// 
			this->Xcounter->AutoSize = true;
			this->Xcounter->BackColor = System::Drawing::Color::Transparent;
			this->Xcounter->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Xcounter->Location = System::Drawing::Point(73, 42);
			this->Xcounter->Name = L"Xcounter";
			this->Xcounter->Size = System::Drawing::Size(24, 24);
			this->Xcounter->TabIndex = 1;
			this->Xcounter->Text = L"0";
			this->Xcounter->Click += gcnew System::EventHandler(this, &TicTacToe::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(190, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PLAYER O POINTS:";
			this->label2->Click += gcnew System::EventHandler(this, &TicTacToe::label2_Click_1);
			// 
			// Ocounter
			// 
			this->Ocounter->AutoSize = true;
			this->Ocounter->BackColor = System::Drawing::Color::Transparent;
			this->Ocounter->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ocounter->Location = System::Drawing::Point(264, 43);
			this->Ocounter->Name = L"Ocounter";
			this->Ocounter->Size = System::Drawing::Size(24, 24);
			this->Ocounter->TabIndex = 3;
			this->Ocounter->Text = L"0";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(366, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 55);
			this->button1->TabIndex = 4;
			this->button1->Text = L"NEW GAME";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TicTacToe::button1_Click);
			// 
			// buttonR
			// 
			this->buttonR->BackColor = System::Drawing::Color::Transparent;
			this->buttonR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonR->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonR->Location = System::Drawing::Point(366, 248);
			this->buttonR->Name = L"buttonR";
			this->buttonR->Size = System::Drawing::Size(139, 55);
			this->buttonR->TabIndex = 5;
			this->buttonR->Text = L"RESET";
			this->buttonR->UseVisualStyleBackColor = false;
			this->buttonR->Click += gcnew System::EventHandler(this, &TicTacToe::buttonR_Click);
			// 
			// a1
			// 
			this->a1->BackColor = System::Drawing::Color::Transparent;
			this->a1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a1.Image")));
			this->a1->Location = System::Drawing::Point(68, 98);
			this->a1->Name = L"a1";
			this->a1->Size = System::Drawing::Size(48, 60);
			this->a1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a1->TabIndex = 6;
			this->a1->TabStop = false;
			this->a1->Tag = L"\?";
			this->a1->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::Transparent;
			this->b1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.Image")));
			this->b1->Location = System::Drawing::Point(162, 87);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(48, 60);
			this->b1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b1->TabIndex = 7;
			this->b1->TabStop = false;
			this->b1->Tag = L"\?";
			this->b1->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// c1
			// 
			this->c1->BackColor = System::Drawing::Color::Transparent;
			this->c1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c1.Image")));
			this->c1->Location = System::Drawing::Point(262, 88);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(48, 60);
			this->c1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c1->TabIndex = 8;
			this->c1->TabStop = false;
			this->c1->Tag = L"\?";
			this->c1->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// a2
			// 
			this->a2->BackColor = System::Drawing::Color::Transparent;
			this->a2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a2.Image")));
			this->a2->Location = System::Drawing::Point(67, 190);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(48, 60);
			this->a2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a2->TabIndex = 9;
			this->a2->TabStop = false;
			this->a2->Tag = L"\?";
			this->a2->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::Transparent;
			this->b2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.Image")));
			this->b2->Location = System::Drawing::Point(166, 179);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(48, 60);
			this->b2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b2->TabIndex = 10;
			this->b2->TabStop = false;
			this->b2->Tag = L"\?";
			this->b2->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// c2
			// 
			this->c2->BackColor = System::Drawing::Color::Transparent;
			this->c2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c2.Image")));
			this->c2->Location = System::Drawing::Point(264, 177);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(48, 60);
			this->c2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c2->TabIndex = 11;
			this->c2->TabStop = false;
			this->c2->Tag = L"\?";
			this->c2->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// a3
			// 
			this->a3->BackColor = System::Drawing::Color::Transparent;
			this->a3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a3.Image")));
			this->a3->Location = System::Drawing::Point(70, 284);
			this->a3->Name = L"a3";
			this->a3->Size = System::Drawing::Size(48, 60);
			this->a3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->a3->TabIndex = 12;
			this->a3->TabStop = false;
			this->a3->Tag = L"\?";
			this->a3->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::Transparent;
			this->b3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.Image")));
			this->b3->Location = System::Drawing::Point(163, 280);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(48, 60);
			this->b3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->b3->TabIndex = 13;
			this->b3->TabStop = false;
			this->b3->Tag = L"\?";
			this->b3->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// c3
			// 
			this->c3->BackColor = System::Drawing::Color::Transparent;
			this->c3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"c3.Image")));
			this->c3->Location = System::Drawing::Point(267, 275);
			this->c3->Name = L"c3";
			this->c3->Size = System::Drawing::Size(48, 60);
			this->c3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->c3->TabIndex = 14;
			this->c3->TabStop = false;
			this->c3->Tag = L"\?";
			this->c3->Click += gcnew System::EventHandler(this, &TicTacToe::play);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// TicTacToe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(522, 396);
			this->Controls->Add(this->c3);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->a3);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->a2);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->a1);
			this->Controls->Add(this->buttonR);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Ocounter);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Xcounter);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"TicTacToe";
			this->Text = L"TicTacToe";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->a3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->b3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->c3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void play (System::Object^  sender, System::EventArgs^  e) {


	PictureBox^pic = (PictureBox^)sender;

	if (click == 1)
	{
		pic->Image = imageList1->Images[1];
		pic->Tag = "X";

	}

	else
	{
		pic->Image = imageList1->Images[0];
		pic->Tag = "O";
	}

	click = !click;
	pic->Enabled = false;
	winner();
}

		 private: Void winner()
		 {
			 //poziom
			 if ((a1->Tag == b1->Tag) && (b1->Tag == c1->Tag) && (a1->Tag != "?"))
				 win = true;
			 if ((a2->Tag == b2->Tag) && (b2->Tag == c2->Tag) && (a2->Tag != "?"))
				 win = true;
			 if ((a3->Tag == b3->Tag) && (b3->Tag == c3->Tag) && (a3->Tag != "?"))
				 win = true;


			 //pion
			 if ((a1->Tag == a2->Tag) && (a2->Tag == a3->Tag) && (a1->Tag != "?"))
				 win = true;
			 if ((b1->Tag == b2->Tag) && (b2->Tag == b3->Tag) && (b1->Tag != "?"))
				 win = true;
			 if ((c1->Tag == c2->Tag) && (c2->Tag == c3->Tag) && (c1->Tag != "?"))
				 win = true;


			 //skos
			 if ((a1->Tag == b2->Tag) && (b2->Tag == c3->Tag) && (a1->Tag != "?"))
				 win = true;
			 if ((c1->Tag == b2->Tag) && (b2->Tag == a3->Tag) && (c1->Tag != "?"))
				 win = true;

			 if (win == 1)
			 {

				 for each(Control^ elements in this->Controls)
				 {
					 if (elements->GetType() == PictureBox::typeid)
					 elements->Enabled = false;
				 }

				 if (click == 1)
				 {
					 Owin++;
					 Ocounter->Text = Convert::ToString(Owin);
					 master = "O";
				 }
				 else
				 {
					 Xwin++;
					 Xcounter->Text = Convert::ToString(Xwin);
					 master = "X";
				 }

				 MessageBox::Show("Player " + master + " wins!", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);

			 }
		 }

				  private: Void reset()
				  {
					  for each(Control^ elements in this->Controls)
					  {
						  try{
							  PictureBox^pic = (PictureBox^)elements;
							  pic->Enabled = true;
							  pic->Tag = "?";
							  pic->Image = imageList1->Images[2];
						  }
						  catch (...)
						  {

						  }
					  }
				  }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	win = false;

	reset();
	
	

}
private: System::Void buttonR_Click(System::Object^  sender, System::EventArgs^  e) {
	win = false;
	reset();
	Xwin = 0;
	Owin = 0;
	Xcounter->Text = "0";
	Ocounter->Text = "0";
}
};
}
