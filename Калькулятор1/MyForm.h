#include <iostream>
using namespace std;
#pragma once

namespace Калькулятор1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;


	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ textBox21;

	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox27;

	private: System::Windows::Forms::TextBox^ textBox29;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox35;

	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox38;

	private: System::Windows::Forms::TextBox^ textBox40;
	private: System::Windows::Forms::TextBox^ textBox41;

	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox45;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox46;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ textBox50;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox51;

	private: System::Windows::Forms::TextBox^ textBox53;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox55;
	private: System::Windows::Forms::TextBox^ textBox56;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox58;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox59;

	private: System::Windows::Forms::TextBox^ textBox61;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox62;

	private: System::Windows::Forms::TextBox^ textBox64;
	private: System::Windows::Forms::TextBox^ textBox65;

	private: System::Windows::Forms::TextBox^ textBox67;
	private: System::Windows::Forms::TextBox^ textBox68;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox69;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox70;

private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::Button^ button4;



private: System::Windows::Forms::ToolTip^ toolTip2;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox11;




private: System::ComponentModel::IContainer^ components;
	protected:
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(295, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Калькулятор многочленов";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(81, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(27, 23);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(67, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(152, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(166, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(27, 23);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(236, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"X";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(16, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(52, 26);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(104, 125);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(52, 26);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(188, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(52, 26);
			this->textBox8->TabIndex = 14;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(249, 97);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(27, 23);
			this->textBox9->TabIndex = 15;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(271, 125);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(52, 26);
			this->textBox12->TabIndex = 18;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(323, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"X";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(336, 97);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(27, 23);
			this->textBox13->TabIndex = 20;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(358, 125);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(52, 26);
			this->textBox15->TabIndex = 22;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(410, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 25);
			this->label6->TabIndex = 23;
			this->label6->Text = L"X";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(424, 97);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(27, 23);
			this->textBox16->TabIndex = 24;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(495, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 25);
			this->label7->TabIndex = 25;
			this->label7->Text = L"X";
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(446, 125);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(52, 26);
			this->textBox18->TabIndex = 27;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox19->Location = System::Drawing::Point(509, 97);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(27, 23);
			this->textBox19->TabIndex = 28;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(580, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 25);
			this->label8->TabIndex = 29;
			this->label8->Text = L"X";
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox21->Location = System::Drawing::Point(531, 125);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(52, 26);
			this->textBox21->TabIndex = 31;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox21_TextChanged);
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox23->Location = System::Drawing::Point(615, 125);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(52, 26);
			this->textBox23->TabIndex = 33;
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox23_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(667, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 25);
			this->label9->TabIndex = 34;
			this->label9->Text = L"X";
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox24->Location = System::Drawing::Point(594, 97);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(27, 23);
			this->textBox24->TabIndex = 35;
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox24_TextChanged);
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox25->Location = System::Drawing::Point(681, 97);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(27, 23);
			this->textBox25->TabIndex = 36;
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox25_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(681, 175);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(27, 23);
			this->textBox10->TabIndex = 68;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged_1);
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox26->Location = System::Drawing::Point(594, 174);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(27, 23);
			this->textBox26->TabIndex = 67;
			this->textBox26->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox26_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(667, 200);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(27, 25);
			this->label10->TabIndex = 66;
			this->label10->Text = L"X";
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox27->Location = System::Drawing::Point(615, 199);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(52, 26);
			this->textBox27->TabIndex = 65;
			this->textBox27->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox27_TextChanged);
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox29->Location = System::Drawing::Point(531, 199);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(52, 26);
			this->textBox29->TabIndex = 63;
			this->textBox29->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox29_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(580, 200);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(27, 25);
			this->label11->TabIndex = 61;
			this->label11->Text = L"X";
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox31->Location = System::Drawing::Point(509, 174);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(27, 23);
			this->textBox31->TabIndex = 60;
			this->textBox31->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox31_TextChanged);
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox32->Location = System::Drawing::Point(446, 200);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(52, 26);
			this->textBox32->TabIndex = 59;
			this->textBox32->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox32_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(495, 200);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 25);
			this->label12->TabIndex = 57;
			this->label12->Text = L"X";
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox34->Location = System::Drawing::Point(424, 175);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(27, 23);
			this->textBox34->TabIndex = 56;
			this->textBox34->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox34_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(411, 200);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 25);
			this->label13->TabIndex = 55;
			this->label13->Text = L"X";
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox35->Location = System::Drawing::Point(358, 200);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(52, 26);
			this->textBox35->TabIndex = 54;
			this->textBox35->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox35_TextChanged);
			// 
			// textBox37
			// 
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox37->Location = System::Drawing::Point(336, 175);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(27, 23);
			this->textBox37->TabIndex = 52;
			this->textBox37->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox37_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(323, 200);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(27, 25);
			this->label14->TabIndex = 51;
			this->label14->Text = L"X";
			// 
			// textBox38
			// 
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox38->Location = System::Drawing::Point(271, 200);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(52, 26);
			this->textBox38->TabIndex = 50;
			this->textBox38->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox38_TextChanged);
			// 
			// textBox40
			// 
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox40->Location = System::Drawing::Point(249, 174);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(27, 23);
			this->textBox40->TabIndex = 48;
			this->textBox40->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox40_TextChanged);
			// 
			// textBox41
			// 
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox41->Location = System::Drawing::Point(188, 200);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(52, 26);
			this->textBox41->TabIndex = 47;
			this->textBox41->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox41_TextChanged);
			// 
			// textBox43
			// 
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox43->Location = System::Drawing::Point(104, 200);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(52, 26);
			this->textBox43->TabIndex = 45;
			this->textBox43->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox43_TextChanged);
			// 
			// textBox44
			// 
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox44->Location = System::Drawing::Point(16, 200);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(52, 26);
			this->textBox44->TabIndex = 44;
			this->textBox44->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox44_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(236, 200);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(27, 25);
			this->label15->TabIndex = 43;
			this->label15->Text = L"X";
			// 
			// textBox45
			// 
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox45->Location = System::Drawing::Point(166, 173);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(27, 23);
			this->textBox45->TabIndex = 42;
			this->textBox45->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox45_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(152, 200);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 25);
			this->label16->TabIndex = 41;
			this->label16->Text = L"X";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(67, 200);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(27, 25);
			this->label17->TabIndex = 40;
			this->label17->Text = L"X";
			// 
			// textBox46
			// 
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox46->Location = System::Drawing::Point(81, 172);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(27, 23);
			this->textBox46->TabIndex = 39;
			this->textBox46->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox46_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(711, 127);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 25);
			this->label18->TabIndex = 69;
			this->label18->Text = L"=";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(736, 127);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 25);
			this->label19->TabIndex = 70;
			this->label19->Text = L"0";
			this->label19->UseWaitCursor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(736, 199);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 25);
			this->label20->TabIndex = 72;
			this->label20->Text = L"0";
			this->label20->UseWaitCursor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(711, 199);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(24, 25);
			this->label21->TabIndex = 71;
			this->label21->Text = L"=";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(48, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 33);
			this->button2->TabIndex = 73;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(736, 416);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 25);
			this->label22->TabIndex = 107;
			this->label22->Text = L"0";
			this->label22->UseWaitCursor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(711, 416);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(24, 25);
			this->label23->TabIndex = 106;
			this->label23->Text = L"=";
			// 
			// textBox49
			// 
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox49->Location = System::Drawing::Point(681, 392);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(27, 23);
			this->textBox49->TabIndex = 105;
			this->textBox49->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox49_TextChanged);
			// 
			// textBox50
			// 
			this->textBox50->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox50->Location = System::Drawing::Point(594, 392);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(27, 23);
			this->textBox50->TabIndex = 104;
			this->textBox50->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox50_TextChanged);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(667, 416);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(27, 25);
			this->label24->TabIndex = 103;
			this->label24->Text = L"X";
			// 
			// textBox51
			// 
			this->textBox51->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox51->Location = System::Drawing::Point(615, 416);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(52, 26);
			this->textBox51->TabIndex = 102;
			this->textBox51->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox51_TextChanged);
			// 
			// textBox53
			// 
			this->textBox53->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox53->Location = System::Drawing::Point(531, 416);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(52, 26);
			this->textBox53->TabIndex = 100;
			this->textBox53->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox53_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(580, 416);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 25);
			this->label25->TabIndex = 98;
			this->label25->Text = L"X";
			// 
			// textBox55
			// 
			this->textBox55->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox55->Location = System::Drawing::Point(509, 392);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(27, 23);
			this->textBox55->TabIndex = 97;
			this->textBox55->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox55_TextChanged);
			// 
			// textBox56
			// 
			this->textBox56->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox56->Location = System::Drawing::Point(446, 416);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(52, 26);
			this->textBox56->TabIndex = 96;
			this->textBox56->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox56_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(495, 416);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(27, 25);
			this->label26->TabIndex = 94;
			this->label26->Text = L"X";
			// 
			// textBox58
			// 
			this->textBox58->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox58->Location = System::Drawing::Point(424, 392);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(27, 23);
			this->textBox58->TabIndex = 93;
			this->textBox58->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox58_TextChanged);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(411, 416);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(27, 25);
			this->label27->TabIndex = 92;
			this->label27->Text = L"X";
			// 
			// textBox59
			// 
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox59->Location = System::Drawing::Point(358, 416);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(52, 26);
			this->textBox59->TabIndex = 91;
			this->textBox59->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox59_TextChanged);
			// 
			// textBox61
			// 
			this->textBox61->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox61->Location = System::Drawing::Point(336, 392);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(27, 23);
			this->textBox61->TabIndex = 89;
			this->textBox61->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox61_TextChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(323, 416);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(27, 25);
			this->label28->TabIndex = 88;
			this->label28->Text = L"X";
			// 
			// textBox62
			// 
			this->textBox62->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox62->Location = System::Drawing::Point(271, 416);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(52, 26);
			this->textBox62->TabIndex = 87;
			this->textBox62->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox62_TextChanged);
			// 
			// textBox64
			// 
			this->textBox64->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox64->Location = System::Drawing::Point(249, 392);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(27, 23);
			this->textBox64->TabIndex = 85;
			this->textBox64->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox64_TextChanged);
			// 
			// textBox65
			// 
			this->textBox65->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox65->Location = System::Drawing::Point(188, 416);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(52, 26);
			this->textBox65->TabIndex = 84;
			this->textBox65->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox65_TextChanged);
			// 
			// textBox67
			// 
			this->textBox67->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox67->Location = System::Drawing::Point(104, 416);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(52, 26);
			this->textBox67->TabIndex = 82;
			this->textBox67->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox67_TextChanged);
			// 
			// textBox68
			// 
			this->textBox68->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox68->Location = System::Drawing::Point(16, 416);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(52, 26);
			this->textBox68->TabIndex = 81;
			this->textBox68->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox68_TextChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(236, 416);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(27, 25);
			this->label29->TabIndex = 80;
			this->label29->Text = L"X";
			// 
			// textBox69
			// 
			this->textBox69->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox69->Location = System::Drawing::Point(166, 392);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(27, 23);
			this->textBox69->TabIndex = 79;
			this->textBox69->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox69_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(152, 416);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(27, 25);
			this->label30->TabIndex = 78;
			this->label30->Text = L"X";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(67, 416);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(27, 25);
			this->label31->TabIndex = 77;
			this->label31->Text = L"X";
			// 
			// textBox70
			// 
			this->textBox70->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox70->Location = System::Drawing::Point(81, 392);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(27, 23);
			this->textBox70->TabIndex = 76;
			this->textBox70->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox70_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(863, 101);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(75, 21);
			this->label32->TabIndex = 109;
			this->label32->Text = L"Ошибка";
			this->label32->Click += gcnew System::EventHandler(this, &MyForm::label32_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(13, 260);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(113, 25);
			this->label33->TabIndex = 110;
			this->label33->Text = L"Операции:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(194, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 33);
			this->button1->TabIndex = 111;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(358, 316);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 33);
			this->button3->TabIndex = 112;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(476, 295);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(27, 23);
			this->textBox1->TabIndex = 115;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(463, 320);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(27, 25);
			this->label34->TabIndex = 114;
			this->label34->Text = L"X";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(410, 320);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 26);
			this->textBox2->TabIndex = 113;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(621, 317);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(46, 33);
			this->button4->TabIndex = 116;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// toolTip2
			// 
			this->toolTip2->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MyForm::toolTip2_Popup);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(739, 296);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(27, 23);
			this->textBox7->TabIndex = 119;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(726, 321);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(27, 25);
			this->label35->TabIndex = 118;
			this->label35->Text = L"X";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(673, 321);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(52, 26);
			this->textBox11->TabIndex = 117;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 493);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox51);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox64);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->textBox70);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {//1 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox5->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) { //1 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {//2 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox6->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {//2 x
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {//2 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}


	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {//3 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox8->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {//3 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox9->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox9->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {//4 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox12->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {//4 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox13->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox13->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {//5 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox15->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox16_TextChanged(System::Object^ sender, System::EventArgs^ e) {//5 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox16->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox16->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {//6 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox18->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {//6 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox19->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox19->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {//7 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox21->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {//7 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox24->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox24->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox23_TextChanged(System::Object^ sender, System::EventArgs^ e) {//8 коэффицент первого многочлена
		Single a;
		bool X = Single::TryParse(textBox23->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {//8 степень первого многочлена
		Single a, b;
		Single::TryParse(textBox25->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox25->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void textBox44_TextChanged(System::Object^ sender, System::EventArgs^ e) {//1 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox44->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox46_TextChanged(System::Object^ sender, System::EventArgs^ e) {//1 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox46->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox46->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox43_TextChanged(System::Object^ sender, System::EventArgs^ e) {//2 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox43->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox45_TextChanged(System::Object^ sender, System::EventArgs^ e) {//2 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox45->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox45->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox41_TextChanged(System::Object^ sender, System::EventArgs^ e) {//3 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox41->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox40_TextChanged(System::Object^ sender, System::EventArgs^ e) {//3 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox40->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox40->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}


	private: System::Void textBox38_TextChanged(System::Object^ sender, System::EventArgs^ e) {//4 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox38->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox37_TextChanged(System::Object^ sender, System::EventArgs^ e) {//4 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox37->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox37->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {//5 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox35->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox34_TextChanged(System::Object^ sender, System::EventArgs^ e) {//5 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox34->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox34->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox32_TextChanged(System::Object^ sender, System::EventArgs^ e) {//6 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox32->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox31_TextChanged(System::Object^ sender, System::EventArgs^ e) {//6 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox31->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox31->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox29_TextChanged(System::Object^ sender, System::EventArgs^ e) {//7 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox29->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {//7 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox26->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox26->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}


	private: System::Void textBox27_TextChanged(System::Object^ sender, System::EventArgs^ e) {//8 коэффицент второго многочлена
		Single a;
		bool X = Single::TryParse(textBox27->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		if (X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}
	private: System::Void textBox10_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {//8 степень второго многочлена
		Single a, b;
		Single::TryParse(textBox10->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);
		bool X = Single::TryParse(textBox10->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
		if (a < 0 || X == false) {
			label32->ForeColor = Color::Red;
		}
		else {
			label32->ForeColor = Color::Black;
		}
	}

	private: System::Void textBox68_TextChanged(System::Object^ sender, System::EventArgs^ e) {//1 коэффицент итогового многочлена
	}
	private: System::Void textBox70_TextChanged(System::Object^ sender, System::EventArgs^ e) {//1 степень итогового многочлена
	}

	private: System::Void textBox67_TextChanged(System::Object^ sender, System::EventArgs^ e) {//2 коэффицент итогового многочлена
	}
	private: System::Void textBox69_TextChanged(System::Object^ sender, System::EventArgs^ e) {//2 степень итогового многочлена
	}

	private: System::Void textBox65_TextChanged(System::Object^ sender, System::EventArgs^ e) {//3 коэффицент итогового многочлена
	}
	private: System::Void textBox64_TextChanged(System::Object^ sender, System::EventArgs^ e) {//3 степень итогового многочлена
	}

	private: System::Void textBox62_TextChanged(System::Object^ sender, System::EventArgs^ e) {//4 коэффицент итогового многочлена
	}
	private: System::Void textBox61_TextChanged(System::Object^ sender, System::EventArgs^ e) {//4 степень итогового многочлена
	}

	private: System::Void textBox59_TextChanged(System::Object^ sender, System::EventArgs^ e) {//5 коэффицент итогового многочлена
	}
	private: System::Void textBox58_TextChanged(System::Object^ sender, System::EventArgs^ e) {//5 степень итогового многочлена
	}

	private: System::Void textBox56_TextChanged(System::Object^ sender, System::EventArgs^ e) {//6 коэффицент итогового многочлена
	}
	private: System::Void textBox55_TextChanged(System::Object^ sender, System::EventArgs^ e) {//6 степень итогового многочлена
	}

	private: System::Void textBox53_TextChanged(System::Object^ sender, System::EventArgs^ e) {//7 коэффицент итогового многочлена
	}	
	private: System::Void textBox50_TextChanged(System::Object^ sender, System::EventArgs^ e) {//7 степень итогового многочлена
	}
	
	private: System::Void textBox51_TextChanged(System::Object^ sender, System::EventArgs^ e) {//8 коэффицент итогового многочлена
	}
	private: System::Void textBox49_TextChanged(System::Object^ sender, System::EventArgs^ e) {//8 степень итогового многочлена
	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//сложение
	Single a, b, c, d, r, f, g, k, a1, b1, c1, d1, r1, f1, g1, k1;
	Single q, w, p, j, t, y, u, z, q1, w1, p1, j1, t1, y1, u1, z1;
	Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);// степени первого многочлена
	Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
	Single::TryParse(textBox9->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c);
	Single::TryParse(textBox13->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d);
	Single::TryParse(textBox16->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, r);
	Single::TryParse(textBox19->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f);
	Single::TryParse(textBox24->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g);
	Single::TryParse(textBox25->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k);

	Single::TryParse(textBox5->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, q);//коэффициенты первого многочлена
	Single::TryParse(textBox6->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, w);
	Single::TryParse(textBox8->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, p);
	Single::TryParse(textBox12->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, j);
	Single::TryParse(textBox15->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, t);
	Single::TryParse(textBox18->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, y);
	Single::TryParse(textBox21->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, u);
	Single::TryParse(textBox23->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, z);
	
	Single::TryParse(textBox46->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a1);//степени второго многочленана
	Single::TryParse(textBox45->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b1);
	Single::TryParse(textBox40->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c1);
	Single::TryParse(textBox37->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d1);
	Single::TryParse(textBox34->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, r1);
	Single::TryParse(textBox31->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f1);
	Single::TryParse(textBox26->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g1);
	Single::TryParse(textBox10->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k1);

	Single::TryParse(textBox44->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, q1);//коэффициенты второго многочлена
	Single::TryParse(textBox43->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, w1);
	Single::TryParse(textBox41->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, p1);
	Single::TryParse(textBox38->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, j1);
	Single::TryParse(textBox35->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, t1);
	Single::TryParse(textBox32->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, y1);
	Single::TryParse(textBox29->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, u1);
	Single::TryParse(textBox27->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, z1);

	int ctep[8], ctep1[8], koa[8], koa1[8], d5;
	ctep[0] = a; ctep[1] = b; ctep[2] = c; ctep[3] = d; ctep[4] = r; ctep[5] = f; ctep[6] = g; ctep[7] = k; 
	ctep1[0] = a1; ctep1[1] = b1; ctep1[2] = c1; ctep1[3] = d1; ctep1[4] = r1; ctep1[5] = f1; ctep1[6] = g1; ctep1[7] = k1;
	koa[0] = q, koa[1] = w, koa[2] = p, koa[3] = j, koa[4] = t, koa[5] = y, koa[6] = u, koa[7] = z;
	koa1[0] = q1, koa1[1] = w1, koa1[2] = p1, koa1[3] = j1, koa1[4] = t1, koa1[5] = y1, koa1[6] = u1, koa1[7] = z1;
	for (int i = 1; i < 8; i++) {// проверка, есть ли в многочлене одинаковые степени
		if (ctep[0] == ctep[i]) {
			koa[0] = koa[0] + koa[i];
			ctep[i] = 0;
			koa[i] = 0;
		}
	}
	d5 = 1;
	for (int l = 1; l < 8; l++) {// проверка, есть ли в многочлене одинаковые степени
		for (int i = 0; i < d5; i++) {
			if (ctep[l] == ctep[i]) {
				koa[l] = koa[l] + koa[i];
				ctep[i] = 0;
				koa[i] = 0;
			}
		}
		for (int i = d5 + 1; i < 8; i++) {// проверка, есть ли в многочлене одинаковые степени
			if (ctep[l] == ctep[i]) {
				koa[l] = koa[l] + koa[i];
				ctep[i] = 0;
				koa[i] = 0;
			}
		}
		d5 += 1;
	}
	for (int l = 0; l < 8; l++) {// сложение коэффицентов первого и второго многочлена
		for (int i = 0; i < 8; i++) {
			if (ctep[l] == ctep1[i]) {
				koa[l] = koa1[i] + koa[l];
			}
		}
	}
	textBox68->Text = String::Format("{0:F0}", koa[0]);//вывод результатов
	textBox67->Text = String::Format("{0:F0}", koa[1]);
	textBox65->Text = String::Format("{0:F0}", koa[2]);
	textBox62->Text = String::Format("{0:F0}", koa[3]);
	textBox59->Text = String::Format("{0:F0}", koa[4]);
	textBox56->Text = String::Format("{0:F0}", koa[5]);
	textBox53->Text = String::Format("{0:F0}", koa[6]);
	textBox51->Text = String::Format("{0:F0}", koa[7]); 
	textBox70->Text = String::Format("{0:F0}", ctep[0]);
	textBox69->Text = String::Format("{0:F0}", ctep[1]);
	textBox64->Text = String::Format("{0:F0}", ctep[2]);
	textBox61->Text = String::Format("{0:F0}", ctep[3]);
	textBox58->Text = String::Format("{0:F0}", ctep[4]);
	textBox55->Text = String::Format("{0:F0}", ctep[5]);
	textBox50->Text = String::Format("{0:F0}", ctep[6]);
	textBox49->Text = String::Format("{0:F0}", ctep[7]);

}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {//ошибка
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {// вычитание
	Single a, b, c, d, r, f, g, k, a1, b1, c1, d1, r1, f1, g1, k1;
	Single q, w, p, j, t, y, u, z, q1, w1, p1, j1, t1, y1, u1, z1;
	Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);// степени первого многочлена
	Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
	Single::TryParse(textBox9->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c);
	Single::TryParse(textBox13->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d);
	Single::TryParse(textBox16->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, r);
	Single::TryParse(textBox19->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f);
	Single::TryParse(textBox24->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g);
	Single::TryParse(textBox25->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k);

	Single::TryParse(textBox5->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, q);//коэффициенты первого многочлена
	Single::TryParse(textBox6->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, w);
	Single::TryParse(textBox8->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, p);
	Single::TryParse(textBox12->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, j);
	Single::TryParse(textBox15->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, t);
	Single::TryParse(textBox18->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, y);
	Single::TryParse(textBox21->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, u);
	Single::TryParse(textBox23->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, z);

	Single::TryParse(textBox46->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a1);//степени второго многочленана
	Single::TryParse(textBox45->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b1);
	Single::TryParse(textBox40->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c1);
	Single::TryParse(textBox37->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d1);
	Single::TryParse(textBox34->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, r1);
	Single::TryParse(textBox31->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f1);
	Single::TryParse(textBox26->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g1);
	Single::TryParse(textBox10->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k1);

	Single::TryParse(textBox44->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, q1);//коэффициенты второго многочлена
	Single::TryParse(textBox43->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, w1);
	Single::TryParse(textBox41->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, p1);
	Single::TryParse(textBox38->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, j1);
	Single::TryParse(textBox35->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, t1);
	Single::TryParse(textBox32->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, y1);
	Single::TryParse(textBox29->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, u1);
	Single::TryParse(textBox27->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, z1);

	int ctep[8], ctep1[8], koa[8], koa1[8], z5;
	ctep[0] = a; ctep[1] = b; ctep[2] = c; ctep[3] = d; ctep[4] = r; ctep[5] = f; ctep[6] = g; ctep[7] = k;
	ctep1[0] = a1; ctep1[1] = b1; ctep1[2] = c1; ctep1[3] = d1; ctep1[4] = r1; ctep1[5] = f1; ctep1[6] = g1; ctep1[7] = k1;
	koa[0] = q, koa[1] = w, koa[2] = p, koa[3] = j, koa[4] = t, koa[5] = y, koa[6] = u, koa[7] = z;
	koa1[0] = q1, koa1[1] = w1, koa1[2] = p1, koa1[3] = j1, koa1[4] = t1, koa1[5] = y1, koa1[6] = u1, koa1[7] = z1;
	for (int i = 1; i < 8; i++) {// проверка, есть ли в многочлене одинаковые степени
		if (ctep[0] == ctep[i]) {
			koa[0] = koa[0] + koa[i];
			ctep[i] = 0;
			koa[i] = 0;
		}
	}

	z5 = 1;
	for (int l = 1; l < 8; l++) {// проверка, есть ли в многочлене одинаковые степени
		for (int i = 0; i < z5; i++) {
			if (ctep[l] == ctep[i]) {
				koa[l] = koa[l] - koa[i];
				ctep[i] = 0;
				koa[i] = 0;
			}
		}
		for (int i = z5 + 1; i < 8; i++) {// проверка, есть ли в многочлене одинаковые степени
			if (ctep[l] == ctep[i]) {
				koa[l] = koa[l] - koa[i];
				ctep[i] = 0;
				koa[i] = 0;
			}
		}
		z5 += 1;
	}
	for (int l = 0; l < 8; l++) { //вычитание коэффицентов первого и второго многочлена
		for (int i = 0; i < 8; i++) {
			if (ctep[l] == ctep1[i]) {
				koa[l] = koa[l] - koa1[i];
			}
		}
	}
	textBox68->Text = String::Format("{0:F0}", koa[0]);// вывод результатов
	textBox67->Text = String::Format("{0:F0}", koa[1]);
	textBox65->Text = String::Format("{0:F0}", koa[2]);
	textBox62->Text = String::Format("{0:F0}", koa[3]);
	textBox59->Text = String::Format("{0:F0}", koa[4]);
	textBox56->Text = String::Format("{0:F0}", koa[5]);
	textBox53->Text = String::Format("{0:F0}", koa[6]);
	textBox51->Text = String::Format("{0:F0}", koa[7]);
	textBox70->Text = String::Format("{0:F0}", ctep[0]);
	textBox69->Text = String::Format("{0:F0}", ctep[1]);
	textBox64->Text = String::Format("{0:F0}", ctep[2]);
	textBox61->Text = String::Format("{0:F0}", ctep[3]);
	textBox58->Text = String::Format("{0:F0}", ctep[4]);
	textBox55->Text = String::Format("{0:F0}", ctep[5]);
	textBox50->Text = String::Format("{0:F0}", ctep[6]);
	textBox49->Text = String::Format("{0:F0}", ctep[7]);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//умножение
	toolTip1->SetToolTip(button3, "Для первого многочлена");// текст подсказки 
	toolTip1->IsBalloon = true;
	Single a, b, c, d, r, f, g, k, q, w, p, j, t, y, u, z, o, o1;
	Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);// степени первого многочлена
	Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
	Single::TryParse(textBox9->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c);
	Single::TryParse(textBox13->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d);
	Single::TryParse(textBox16->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, r);
	Single::TryParse(textBox19->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f);
	Single::TryParse(textBox24->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g);
	Single::TryParse(textBox25->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k);

	Single::TryParse(textBox5->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, q);//коэффициенты первого многочлена
	Single::TryParse(textBox6->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, w);
	Single::TryParse(textBox8->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, p);
	Single::TryParse(textBox12->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, j);
	Single::TryParse(textBox15->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, t);
	Single::TryParse(textBox18->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, y);
	Single::TryParse(textBox21->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, u);
	Single::TryParse(textBox23->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, z);

	Single::TryParse(textBox2->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, o);
	Single::TryParse(textBox1->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, o1);
	int ctep[8], koa[8], f5;
	ctep[0] = a; ctep[1] = b; ctep[2] = c; ctep[3] = d; ctep[4] = r; ctep[5] = f; ctep[6] = g; ctep[7] = k;
	koa[0] = q, koa[1] = w, koa[2] = p, koa[3] = j, koa[4] = t, koa[5] = y, koa[6] = u, koa[7] = z;
	for (int i = 1; i < 8; i++) {// проверка, есть ли в многочлене одинаковые степени
		if (ctep[0] == ctep[i]) {
			koa[0] = koa[0] + koa[i];
			ctep[i] = 0;
			koa[i] = 0;
		}
	}

	if (ctep[0] == 0) {//вывод степеней(при умножении степени складываются)
		textBox70->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox70->Text = String::Format("{0:F0}", ctep[0] + o1);
	}
	if (ctep[1] == 0) {
		textBox69->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox69->Text = String::Format("{0:F0}", ctep[1] + o1);
	}
	if (ctep[2] == 0) {
		textBox64->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox64->Text = String::Format("{0:F0}", ctep[2] + o1);
	}
	if (ctep[3] == 0) {
		textBox61->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox61->Text = String::Format("{0:F0}", ctep[3] + o1);
	}
	if (ctep[4] == 0) {
		textBox58->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox58->Text = String::Format("{0:F0}", ctep[4] + o1);
	}
	if (ctep[5] == 0) {
		textBox55->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox55->Text = String::Format("{0:F0}", ctep[5] + o1);
	}
	if (ctep[6] == 0) {
		textBox50->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox50->Text = String::Format("{0:F0}", ctep[6] + o1);
	}
	if (ctep[7] == 0) {
		textBox49->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox49->Text = String::Format("{0:F0}", ctep[7] + o1);
	}
	for (int i = 0; i < 8; i++) {// умножение всех коэффицентов
		koa[i] = koa[i] * o;
	}
	textBox68->Text = String::Format("{0:F0}", koa[0]);//вывод коэффицентов
	textBox67->Text = String::Format("{0:F0}", koa[1]);
	textBox65->Text = String::Format("{0:F0}", koa[2]);
	textBox62->Text = String::Format("{0:F0}", koa[3]);
	textBox59->Text = String::Format("{0:F0}", koa[4]);
	textBox56->Text = String::Format("{0:F0}", koa[5]);
	textBox53->Text = String::Format("{0:F0}", koa[6]);
	textBox51->Text = String::Format("{0:F0}", koa[7]);
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {//коэ умножения 
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {//степ умножения 
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {// деление
	toolTip2->SetToolTip(button4, "Для первого многочлена");// текст подсказки
	toolTip2->IsBalloon = true;
	Single a, b, c, d, r, f, g, k, q, w, p, j, t, y, u, z, o, o1;
	Single::TryParse(textBox3->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, a);// степени первого многочлена
	Single::TryParse(textBox4->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, b);
	Single::TryParse(textBox9->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, c);
	Single::TryParse(textBox13->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, d);
	Single::TryParse(textBox16->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, r);
	Single::TryParse(textBox19->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, f);
	Single::TryParse(textBox24->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, g);
	Single::TryParse(textBox25->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, k);

	Single::TryParse(textBox5->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, q);//коэффициенты первого многочлена
	Single::TryParse(textBox6->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, w);
	Single::TryParse(textBox8->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, p);
	Single::TryParse(textBox12->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, j);
	Single::TryParse(textBox15->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, t);
	Single::TryParse(textBox18->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, y);
	Single::TryParse(textBox21->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, u);
	Single::TryParse(textBox23->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, z);

	Single::TryParse(textBox11->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, o);
	Single::TryParse(textBox7->Text, System::Globalization::NumberStyles::Number, System::Globalization::NumberFormatInfo::CurrentInfo, o1);
	if (o == 0) {// нельзя делить на ноль
		label32->ForeColor = Color::Red;
		return;
	}
	else {
		label32->ForeColor = Color::Black;
	}
	int ctep[8], koa[8], f5;
	ctep[0] = a; ctep[1] = b; ctep[2] = c; ctep[3] = d; ctep[4] = r; ctep[5] = f; ctep[6] = g; ctep[7] = k;
	koa[0] = q, koa[1] = w, koa[2] = p, koa[3] = j, koa[4] = t, koa[5] = y, koa[6] = u, koa[7] = z;
	for (int i = 1; i < 8; i++) {// проверка, есть ли в многочлене одинаковые степени
		if (ctep[0] == ctep[i]) {
			koa[0] = koa[0] + koa[i];
			ctep[i] = 0;
			koa[i] = 0;
		}
	}

	if (ctep[0] == 0) {//вывод степеней(при делении степени вычитаются)
		textBox70->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox70->Text = String::Format("{0:F0}", ctep[0] - o1);
	}
	if (ctep[1] == 0) {
		textBox69->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox69->Text = String::Format("{0:F0}", ctep[1] - o1);
	}
	if (ctep[2] == 0) {
		textBox64->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox64->Text = String::Format("{0:F0}", ctep[2] - o1);
	}
	if (ctep[3] == 0) {
		textBox61->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox61->Text = String::Format("{0:F0}", ctep[3] - o1);
	}
	if (ctep[4] == 0) {
		textBox58->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox58->Text = String::Format("{0:F0}", ctep[4] - o1);
	}
	if (ctep[5] == 0) {
		textBox55->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox55->Text = String::Format("{0:F0}", ctep[5] - o1);
	}
	if (ctep[6] == 0) {
		textBox50->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox50->Text = String::Format("{0:F0}", ctep[6] - o1);
	}
	if (ctep[7] == 0) {
		textBox49->Text = String::Format("{0:F0}", 0);
	}
	else {
		textBox49->Text = String::Format("{0:F0}", ctep[7] - o1);
	}
	textBox68->Text = String::Format("{0:F1}", koa[0] / o);
	textBox67->Text = String::Format("{0:F1}", koa[1] / o);
	textBox65->Text = String::Format("{0:F1}", koa[2] / o);
	textBox62->Text = String::Format("{0:F1}", koa[3] / o);
	textBox59->Text = String::Format("{0:F1}", koa[4] / o);
	textBox56->Text = String::Format("{0:F1}", koa[5] / o);
	textBox53->Text = String::Format("{0:F1}", koa[6] / o);
	textBox51->Text = String::Format("{0:F1}", koa[7] / o);
}
private: System::Void toolTip2_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {

}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {// коэ деления
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {// степ деления
}
};
}
