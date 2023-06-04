#pragma once

namespace ToyShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^ Pproducts;
	private: System::Windows::Forms::CheckedListBox^ Savat;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnBuy;
	protected:

	protected:





	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm1
			// 
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd(System::Object^ sender, System::EventArgs^ e) {
		Savat->Items->Add(Pproducts->Text);
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
