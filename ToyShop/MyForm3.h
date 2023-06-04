#pragma once
#include <Windows.h>
#include <vcclr.h>
#include <iostream>
#include <Windows.h>
#using <System.dll>
namespace ToyShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here
			listBox1->Items->Clear();
			array<String^>^ toyNames = {
					"LEGO", "Barbie", "Hot Wheels", "Nerf", "Play-Doh",
					"Fisher-Price", "Transformers", "My Little Pony", "Monopoly", "Paw Patrol",
					"Baby Alive", "Marvel Legends", "Pokemon", "Thomas & Friends", "L.O.L. Surprise!",
					"Crayola", "Uno", "Ninja Turtles", "Minecraft", "Pikachu"
			};

			array <double>^ toyCosts = {
				35.99, 19.99, 9.99, 14.99, 7.99,
				29.99, 24.99, 12.99, 16.99, 11.99,
				34.99, 21.99, 8.99, 27.99, 13.99,
				6.99, 9.99, 18.99, 23.99, 10.99
			};
			for (size_t i = 0; i < toyNames->Length; i++) {
				String^ toyItem = toyNames[i] + " - $" + Convert::ToString(toyCosts[i]);
				listBox1->Items->Add(toyItem);
			}
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

	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ total_cost;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->total_cost = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(438, 228);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(173, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Qo\'shish";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(448, 388);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 46);
			this->button2->TabIndex = 3;
			this->button2->Text = L"O\'chirish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(765, 575);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(256, 43);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Buyurtma berish";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(48, 155);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(329, 352);
			this->listBox1->TabIndex = 6;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(674, 155);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(347, 352);
			this->listBox2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(36, 535);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 61);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Jami:";
			// 
			// total_cost
			// 
			this->total_cost->AutoSize = true;
			this->total_cost->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->total_cost->Location = System::Drawing::Point(144, 535);
			this->total_cost->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->total_cost->Name = L"total_cost";
			this->total_cost->Size = System::Drawing::Size(59, 61);
			this->total_cost->TabIndex = 10;
			this->total_cost->Text = L"$0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ravie", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(360, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(320, 81);
			this->label3->TabIndex = 12;
			this->label3->Text = L"JoyToy";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(810, 120);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 33);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Savat";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(139, 118);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 35);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Mahsulotlar";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1041, 662);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->total_cost);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"JoyToys O\'yinchoq do\'koni";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double getTotalCost() {
		double sm = 0.0;
		for (int i = 0; i < listBox2->Items->Count; i++) {
			String^ item = listBox2->Items[i]->ToString();
			int a = item->IndexOf('$');
			String^ x_str = item->Substring(a + 1);
			double x;
			sm = sm + Convert::ToDouble(x_str);
		}
		return sm;

	}
	private: System::Void updateTotalCost() {
		double sm = getTotalCost();
		total_cost->Text = "$" + Convert::ToString(sm);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Add(listBox1->Text);
		updateTotalCost();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Remove(listBox2->SelectedItem);
	updateTotalCost();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ msg;
	if (listBox2->Items->Count == 0) {
		msg = "Savat bo'sh. Avval mahsulot tanlang.";
		MessageBox::Show(msg, "Buyurtma tafsilotlari", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		msg = "Buyurtmangiz qabul qilindi. Xaridingiz uchun rahmat!\n\n" ;
		for (int i = 0; i < listBox2->Items->Count; i++) {
			String^ item = listBox2->Items[i]->ToString();
			msg += Convert::ToString(i + 1) + ". " + item + "\n";
		}
		msg += "\nJami: $" + Convert::ToString(getTotalCost());
		System::Windows::Forms::DialogResult result = MessageBox::Show(msg, "Buyurtma tafsilotlari", MessageBoxButtons::OKCancel, MessageBoxIcon::None);
		if (result == System::Windows::Forms::DialogResult::OK) {
			listBox2->Items->Clear();
			updateTotalCost();
		}	
	}
}
};
}
