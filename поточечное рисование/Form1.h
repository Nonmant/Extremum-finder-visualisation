#pragma once
float map[400][400],mmax=-1,mmin=-1;
float Fa0=0, Fa1=1, Fa2=-10, Fb0=0, Fb1=3, Fb2=-10, Fc=0, Fxf=-20, Fyf=-20, Fxt=20, Fyt=20, Fx0=-15, Fy0=-15, Fex=3, ex=0.001, Flim=40;
float Fga0=1, Fga1=1, Fga2=1, Fgb0=3, Fgb1=3, Fgb2=3, Fgc0=0, Fgc1=0, Fgc2=0, Fk=0.0625, Fk0=0.0625, Fdk=1.5;
#include <math.h>
namespace поточечноерисование {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::PictureBox^  pic1;
	public: System::Windows::Forms::Button^  ButtPrint;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	public: 

	public: 
	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->ButtPrint = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pic1))->BeginInit();
			this->SuspendLayout();
			// 
			// pic1
			// 
			this->pic1->Location = System::Drawing::Point(480, 12);
			this->pic1->Name = L"pic1";
			this->pic1->Size = System::Drawing::Size(400, 400);
			this->pic1->TabIndex = 0;
			this->pic1->TabStop = false;
			// 
			// ButtPrint
			// 
			this->ButtPrint->Location = System::Drawing::Point(85, 317);
			this->ButtPrint->Name = L"ButtPrint";
			this->ButtPrint->Size = System::Drawing::Size(88, 23);
			this->ButtPrint->TabIndex = 1;
			this->ButtPrint->Text = L"Рассчитать";
			this->ButtPrint->UseVisualStyleBackColor = true;
			this->ButtPrint->Click += gcnew System::EventHandler(this, &Form1::ButtPrint_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {L"Оттенки красного", L"Оттенки зелёного", 
				L"Оттенки синего", L"Цвета радуги"});
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Оттенки красного", L"Оттенки зелёного", L"Оттенки синего", 
				L"Разноцветная", L"Светлая красная", L"Светлая зелёная", L"Светлая синяя"});
			this->comboBox1->Location = System::Drawing::Point(141, 274);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"f(x,y)=a₁⋅x²+a₂⋅x+b₁⋅y²+b₂⋅y+c";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"a₀=";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"a₁=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"a₂=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(86, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"b₀=";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(86, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"b₁=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(86, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"b₂=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"0";
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(41, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"1";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(41, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"-10";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(114, 72);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"0";
			this->textBox4->Visible = false;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(114, 33);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->Text = L"3";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(114, 52);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(39, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"-10";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(189, 33);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(39, 20);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"0";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(161, 36);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"c=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 94);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(122, 18);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Область поиска";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(66, 115);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(39, 20);
			this->textBox8->TabIndex = 20;
			this->textBox8->Text = L"-20";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(38, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"x=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"От";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(141, 115);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(39, 20);
			this->textBox9->TabIndex = 23;
			this->textBox9->Text = L"-20";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(113, 118);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(18, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"y=";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(141, 141);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(39, 20);
			this->textBox10->TabIndex = 28;
			this->textBox10->Text = L"20";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form1::textBox10_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(113, 144);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(18, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"y=";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 144);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"До";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(66, 141);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(39, 20);
			this->textBox11->TabIndex = 25;
			this->textBox11->Text = L"20";
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(38, 144);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(18, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"x=";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(9, 274);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(131, 17);
			this->label16->TabIndex = 29;
			this->label16->Text = L"Цветовая палитра";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(13, 322);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"f(x,y)→min";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(116, 188);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(39, 20);
			this->textBox12->TabIndex = 36;
			this->textBox12->Text = L"-20";
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(88, 191);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 13);
			this->label18->TabIndex = 35;
			this->label18->Text = L"y₀=";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(41, 188);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(39, 20);
			this->textBox13->TabIndex = 33;
			this->textBox13->Text = L"-20";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form1::textBox13_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(13, 191);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 13);
			this->label20->TabIndex = 32;
			this->label20->Text = L"x₀=";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(12, 164);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(182, 18);
			this->label21->TabIndex = 31;
			this->label21->Text = L"Начальное приближение";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(13, 211);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(74, 18);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Точность";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(83, 229);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(40, 25);
			this->label22->TabIndex = 38;
			this->label22->Text = L"10⁻";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(116, 229);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(39, 20);
			this->textBox14->TabIndex = 39;
			this->textBox14->Text = L"3";
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Form1::textBox14_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(51, 233);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(36, 20);
			this->label23->TabIndex = 40;
			this->label23->Text = L"40≥";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(160, 233);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(46, 20);
			this->label24->TabIndex = 41;
			this->label24->Text = L"≥10⁻⁷";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(12, 370);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(108, 17);
			this->label25->TabIndex = 42;
			this->label25->Text = L"x=\? y=\? f(x,y)=\?";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(9, 343);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(73, 18);
			this->label26->TabIndex = 43;
			this->label26->Text = L"Решение:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(12, 399);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(21, 13);
			this->label27->TabIndex = 44;
			this->label27->Text = L"i=\?";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(256, 9);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(98, 18);
			this->label28->TabIndex = 45;
			this->label28->Text = L"Ограничения";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(433, 55);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(39, 20);
			this->textBox15->TabIndex = 60;
			this->textBox15->Text = L"0";
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &Form1::textBox15_TextChanged);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(405, 58);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(19, 13);
			this->label29->TabIndex = 59;
			this->label29->Text = L"c=";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(358, 55);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(39, 20);
			this->textBox17->TabIndex = 57;
			this->textBox17->Text = L"3";
			this->textBox17->TextChanged += gcnew System::EventHandler(this, &Form1::textBox17_TextChanged);
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(285, 55);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(39, 20);
			this->textBox20->TabIndex = 54;
			this->textBox20->Text = L"1";
			this->textBox20->TextChanged += gcnew System::EventHandler(this, &Form1::textBox20_TextChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(330, 58);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(19, 13);
			this->label31->TabIndex = 51;
			this->label31->Text = L"b=";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(257, 58);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(19, 13);
			this->label34->TabIndex = 48;
			this->label34->Text = L"a=";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(256, 31);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(146, 18);
			this->label36->TabIndex = 46;
			this->label36->Text = L"g₀(x,y)=a⋅x+b⋅y+c≤0";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(434, 102);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(39, 20);
			this->textBox16->TabIndex = 67;
			this->textBox16->Text = L"0";
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &Form1::textBox16_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(406, 105);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(19, 13);
			this->label30->TabIndex = 66;
			this->label30->Text = L"c=";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(359, 102);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(39, 20);
			this->textBox18->TabIndex = 65;
			this->textBox18->Text = L"3";
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &Form1::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(286, 102);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(39, 20);
			this->textBox19->TabIndex = 64;
			this->textBox19->Text = L"1";
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &Form1::textBox19_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(331, 105);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(19, 13);
			this->label32->TabIndex = 63;
			this->label32->Text = L"b=";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(258, 105);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(19, 13);
			this->label33->TabIndex = 62;
			this->label33->Text = L"a=";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(257, 78);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(146, 18);
			this->label35->TabIndex = 61;
			this->label35->Text = L"g₁(x,y)=a⋅x+b⋅y+c≤0";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(435, 149);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(39, 20);
			this->textBox21->TabIndex = 74;
			this->textBox21->Text = L"0";
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &Form1::textBox21_TextChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(407, 152);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(19, 13);
			this->label37->TabIndex = 73;
			this->label37->Text = L"c=";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(360, 149);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(39, 20);
			this->textBox22->TabIndex = 72;
			this->textBox22->Text = L"3";
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &Form1::textBox22_TextChanged);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(287, 149);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(39, 20);
			this->textBox23->TabIndex = 71;
			this->textBox23->Text = L"1";
			this->textBox23->TextChanged += gcnew System::EventHandler(this, &Form1::textBox23_TextChanged);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(332, 152);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(19, 13);
			this->label38->TabIndex = 70;
			this->label38->Text = L"b=";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(259, 152);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(19, 13);
			this->label39->TabIndex = 69;
			this->label39->Text = L"a=";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(258, 125);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(146, 18);
			this->label40->TabIndex = 68;
			this->label40->Text = L"g₂(x,y)=a⋅x+b⋅y+c≤0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(256, 172);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(57, 18);
			this->label41->TabIndex = 75;
			this->label41->Text = L"Штраф";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(376, 188);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(39, 20);
			this->textBox24->TabIndex = 79;
			this->textBox24->Text = L"1.5";
			this->textBox24->TextChanged += gcnew System::EventHandler(this, &Form1::textBox24_TextChanged);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(287, 188);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(39, 20);
			this->textBox25->TabIndex = 78;
			this->textBox25->Text = L"0.0625";
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &Form1::textBox25_TextChanged);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(332, 191);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(38, 13);
			this->label42->TabIndex = 77;
			this->label42->Text = L"dk/di=";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(259, 191);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(22, 13);
			this->label43->TabIndex = 76;
			this->label43->Text = L"k₀=";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 423);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ButtPrint);
			this->Controls->Add(this->pic1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Многомерный поиск";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pic1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void changedlim(System::Object^  sender, System::EventArgs^  e){
	if(Fxt-Fxf>Fyt-Fyf){
		Flim=Fyt-Fyf;
	}else
	{
		Flim=Fxt-Fxf;
	}
	label23->Text =System::Convert::ToString(Flim)+L"≥";
	textBox14_TextChanged(sender, e);
	textBox12_TextChanged(sender, e);
	textBox13_TextChanged(sender, e);
	mmax=-1;
	mmin=-1; //(mmax==-1)&&(mmin==-1);
}
void changed()
{
	pic1->Visible=false;
	label25->Text = L"x=\? y=\? f(x,y)=\?";
	label27->Text = L"i=\?";
	ButtPrint->Enabled=true;
	mmax=-1;
	mmin=-1;
}
float f(float x, float y){
	float g0=Fga0*x+Fgb0*y+Fgc0;
	float g1=Fga1*x+Fgb1*y+Fgc1;
	float g2=Fga2*x+Fgb2*y+Fgc2;
	return Fa1*x*x+Fa2*x+Fb1*y*y+Fb2*y+Fc+Fk*((1+Math::Sign(g0))*g0*g0+(1+Math::Sign(g1))*g1*g1+(1+Math::Sign(g2))*g2*g2);
}

void diff(float x, float y,float e, float (&d)[2]){
	d[0]=(f(x+e,y)-f(x,y))/e;
	d[1]=(f(x,y+e)-f(x,y))/e;
}

float modX(float (&x)[2]){
	return Math::Pow(x[0]*x[0]+x[1]*x[1], 0.5F);
}

float df(float x0,float x1,float (&d)[2],float e){
	return (f(x0+e*d[0],x1+e*d[1])-f(x0,x1))/(e*modX(d));
};

System::Drawing::Bitmap^ bit;
void CalculateImage(float xfr,float yfr, float xto, float yto){
	float xdelim=(xto-xfr)/400, ydelim=(yto-yfr)/400;
	//float map[400][400];
	mmax=f(xfr,yfr);
	mmin=mmax;
	for(int i=0;i<400;i++){
		for(int j=0;j<400;j++){
			map[i][j]=f(xfr+i*xdelim,yfr+j*ydelim);
			if(map[i][j]>mmax)
				mmax=map[i][j];
			else
				if(map[i][j]<mmin)
					mmin=map[i][j];
		}
	}
			//bit= gcnew System::Drawing::Bitmap(400,400);
	//System::Drawing::Bitmap bit(400,400);
	//System::Drawing::Image^ bit;
	//cv::Mat bit( Size( 200, 200 ), CV_8UC1 );
			//int r,g,b;
	float absDel=mmax-mmin;
	for(int i=0;i<400;i++)
		for(int j=0;j<400;j++){
			map[i][j]=(map[i][j]-mmin)/absDel;
					/*r=int(255*map[i][j] + 0.5);
					g=0;
					b=0;*/
			/*
			if(k<=0.25){
			r=255;
			g=int(255*k*4 + 0.5);
			b=0;
			}else
			if(k<=0.5){
			r=int(255*(1-4*(k-0.25)) + 0.5);
			g=255;
			b=0;
			}else
			if(k<=0.75){
			r=0;
			g=255;
			b=int(255*(k-0.5)*4 + 0.5);
			}else{
			r=0;
			g=int(255*(1-4*(k-0.75)) + 0.5);
			b=255;
			};
			*/
			/*
			if(r<0)r=0;
			if(g<0)g=0;
			if(b<0)b=0;
			if(r>255)b=255;
			if(g>255)b=255;
			if(b>255)b=255;
			*/
					//bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(r,g,b));
		}
				//pic1->Image=bit;

}
void PrintImage(){
	int r,g,b;
	bit= gcnew System::Drawing::Bitmap(400,400);
	if(comboBox1->SelectedIndex==-1)comboBox1->SelectedIndex=0;

	switch(comboBox1->SelectedIndex){
	case 0:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				r=int(255*map[i][j] + 0.5);
				bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(r,0,0));
			};
		break;
	case 1:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				g=int(255*map[i][j] + 0.5);
				bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(0,g,0));
			};
		break;
	case 2:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				b=int(255*map[i][j] + 0.5);
				bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(0,0,b));
			};
		break;
	case 3:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				if(map[i][j]<=0.25){
					r=255;
					g=int(255*map[i][j]*4 + 0.5);
					b=0;
				}else
					if(map[i][j]<=0.5){
						r=int(255*(1-4*(map[i][j]-0.25)) + 0.5);
						g=255;
						b=0;
					}else
						if(map[i][j]<=0.75){
							r=0;
							g=255;
							b=int(255*(map[i][j]-0.5)*4 + 0.5);
						}else{
							r=0;
							g=int(255*(1-4*(map[i][j]-0.75)) + 0.5);
							b=255;
						};
						bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(r,g,b));
			};
		break;
	case 4:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				r=50+int(205*map[i][j] + 0.5);
				bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(r,0,0));
			};
		break;
	case 5:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				g=50+int(205*map[i][j] + 0.5);
				bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(0,g,0));
			};
		break;
	case 6:
		for(int i=0;i<400;i++)
			for(int j=0;j<400;j++){
				b=50+int(205*map[i][j] + 0.5);
				bit->SetPixel(i, 399-j, System::Drawing::Color::FromArgb(0,0,b));
			};
		break;
	}

	pic1->Image=bit;
}
//L"Светлая красная", L"Светлая зелёная", L"Светлая синяя"

float linmin(float x0,float y0,float xmi,float ymi,float xm,float ym,float (&d)[2],float e){
	float x[2]={x0,y0};
	float xmax[2]={xm,ym};
	float S0=(xmax[0]-x[0])/d[0];
	float S1=(xmax[1]-x[1])/d[1];
	float Smax;//=(S0>S1)?S1:S0; //Smax=min(S0,S1)
	if(d[0]==0)
		if(d[1]==0) return 0;
		else
		Smax=S1;
	else
		if(d[1]==0)
			Smax=S0;
		else
			Smax=(S0>S1)?S1:S0;
	//S1=0;
	//
	float xmin[2]={xmi,ymi};
	S0=(x[0]-xmin[0])/d[0];
	S1=(x[1]-xmin[1])/d[1];
	float Smin;//=(S0>S1)?S1:S0; //Smin=max(S0,S1)
	if(d[0]==0)
		if(d[1]==0) return 0;
		else
		Smin=S1;
	else
		if(d[1]==0)
			Smax=S0;
		else
			Smax=(S0>S1)?S0:S1;
	//
	S1=Smin;
	float S2=Smax;
	//float df1=df(x[0],x[1],d,e), df2=df(x[0]+S2*d[0],x[1]+S2*d[1],d,e);
	float df1=df(x[0]+S1*d[0],x[1]+S1*d[1],d,e), df2=df(x[0]+S2*d[0],x[1]+S2*d[1],d,e);
	S0=S1-df1*(S2-S1)/(df2-df1);
	float df0=df(x[0]+S0*d[0],x[1]+S0*d[1],d,e);
	while(df0>e){
		if(df0>0){
			S2=S0;
			df2=df0;}
		else{
			S1=S0;
			df1=df0;
		};
		S0=S1-df1*(S2-S1)/(df2-df1);
		df0=df(x[0]+S0*d[0],x[1]+S0*d[1],d,e);
	}
	return S0;
}

void optimize(float x0, float y0,float xmin,float ymin,float xmax,float ymax, float e, float (&out)[4])
{
	Fk=Fk*Fdk;
	float Xscale=abs(400/(xmax-xmin)), Yscale=abs(400/(ymax-ymin));
	out[3]++; //x,y,z,i
	float d0[2];
	diff(x0,y0,e,d0);
	d0[0]=-d0[0];
	d0[1]=-d0[1];
	float S=linmin(x0,y0,xmin,ymin,xmax,ymax,d0,e);

	System::Drawing::Pen^ myPen;
	myPen =gcnew System::Drawing::Pen(System::Drawing::Color::Yellow);
	//Graphics::DrawLine (Pen^, PointF, PointF)
	PointF dot1=PointF((x0-xmin)*Xscale,400-(y0-ymin)*Yscale);
	float x1=x0+d0[0]*S;
	float y1=y0+d0[1]*S;
	PointF dot2 =PointF((x1-xmin)*Xscale,400-(y1-ymin)*Yscale);
	Graphics ^ gr = Graphics::FromImage(pic1->Image);
	gr->DrawLine(myPen, dot1, dot2);

	if((abs(f(x0,y0)-f(x1,y1))<=e)||((abs(x0-x1)<=e)&&(abs(y0-y1)<=e))){
		out[0]=x1;
		out[1]=y1;
		out[2]=f(x1,y1);
	}else{
		out[3]++;
		float d1[2];
		diff(x1,y1,e,d1);
		d1[0]=-d1[0];
		d1[1]=-d1[1];
		float b=(d1[1]*d1[1]+d1[0]*d1[0])/(d0[1]*d0[1]+d0[0]*d0[0]);

		d1[0]=d1[0]+d0[0]*b;
		d1[1]=d1[1]+d0[1]*b;
		S=linmin(x1,y1,xmin,ymin,xmax,ymax,d1,e);
		float x2=x1+d1[0]*S;
		float y2=y1+d1[1]*S;
		dot1=PointF((x2-xmin)*Xscale,400-(y2-ymin)*Yscale);
		myPen->Color=System::Drawing::Color::Magenta;
		gr->DrawLine(myPen, dot2, dot1);

		if((abs(f(x0,y0)-f(x1,y1))<=e)||((abs(x0-x1)<=e)&&(abs(y0-y1)<=e))){
			out[0]=x1;
			out[1]=y1;
			out[2]=f(x1,y1);
		}else
			optimize(x2,y2,xmin,ymin,xmax,ymax,e,out);
	}
}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void ButtPrint_Click(System::Object^  sender, System::EventArgs^  e) {
				 Fk=Fk0;
				 if((mmax==-1)&&(mmin==-1))
					 CalculateImage(Fxf,Fyf,Fxt,Fyt);
				 PrintImage();
				 pic1->Visible=true;
				 float result[4]={0,0,0,0};
				 optimize(Fx0,Fy0,Fxf,Fyf,Fxt,Fyt, ex,result);
				 label25->Text = L"x="+System::Convert::ToString(Math::Round(result[0],Math::Round(Fex)))+L" y="+System::Convert::ToString(Math::Round(result[1],Math::Round(Fex)))+" f(x,y)="+System::Convert::ToString(Math::Round(result[2],Math::Round(Fex)));
				 label27->Text = L"i="+System::Convert::ToString(Math::Round(result[3],Math::Round(Fex)));
			 }
	private: System::Void pic1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sa0=textBox1->Text;
			 bool isa0 = Single::TryParse(Sa0,Fa0);
			 if(!isa0){
				textBox1->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox1->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sa1=textBox2->Text;
			 bool isa1 = Single::TryParse(Sa1,Fa1);
			 if(!isa1){
				textBox2->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox2->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sa2=textBox3->Text;
			 bool isa2 = Single::TryParse(Sa2,Fa2);
			 if(!isa2){
				textBox3->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox3->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sb0=textBox4->Text;
			 bool isb0 = Single::TryParse(Sb0,Fb0);
			 if(!isb0){
				textBox4->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox4->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sb1=textBox5->Text;
			 bool isb1 = Single::TryParse(Sb1,Fb1);
			 if(!isb1){
				textBox5->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox5->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sb2=textBox6->Text;
			 bool isb2 = Single::TryParse(Sb2,Fb2);
			 if(!isb2){
				textBox6->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox6->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sc=textBox7->Text;
			 bool isc = Single::TryParse(Sc,Fc);
			 if(!isc){
				textBox7->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox7->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sxf=textBox8->Text;
			 bool isxf = Single::TryParse(Sxf,Fxf);
			 if(!isxf){
				textBox8->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 if(Fxf>Fxt){
					textBox8->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;}
				 else{
				 changed();
				 changedlim(sender, e);
				 textBox8->BackColor=System::Drawing::Color::White;}
			 }
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Syf=textBox9->Text;
			 bool isyf = Single::TryParse(Syf,Fyf);
			 if(!isyf){
				textBox9->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 if(Fyf>Fyt){
					textBox9->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;}
				 else{
				 changed();
				 changedlim(sender, e);
				 textBox9->BackColor=System::Drawing::Color::White;}
			 }
		 }
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sxt=textBox11->Text;
			 bool isxt = Single::TryParse(Sxt,Fxt);
			 if(!isxt){
				textBox11->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 if(Fxf>Fxt){
					textBox11->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;}
				 else{
				 changed();
				 changedlim(sender, e);
				 textBox11->BackColor=System::Drawing::Color::White;}
			 }
		 }
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Syt=textBox10->Text;
			 bool isyt = Single::TryParse(Syt,Fyt);
			 if(!isyt){
				textBox10->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 if(Fyf>Fyt){
					textBox10->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;}
				 else{
				 changed();
				 changedlim(sender, e);
				 textBox10->BackColor=System::Drawing::Color::White;}
			 }
		 }
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sx0=textBox13->Text;
			 bool isx0 = Single::TryParse(Sx0,Fx0);
			 if((Fx0<Fxf)||(Fx0>Fxt))isx0=false;
			 if(!isx0){
				textBox13->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox13->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sy0=textBox12->Text;
			 bool isy0 = Single::TryParse(Sy0,Fy0);
			 if((Fy0<Fyf)||(Fy0>Fyt))isy0=false;
			 if(!isy0){
				textBox12->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox12->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sex=textBox14->Text;
			 bool isex = Single::TryParse(Sex,Fex);
			 if(!isex){
				textBox14->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 ex=Math::Pow(10,-Fex);
				 if((Fex>7)||(ex>Flim)){
					 textBox14->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;}
				 else{
					changed();
					textBox14->BackColor=System::Drawing::Color::White;}
			 }
		 }
private: System::Void textBox20_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sga0=textBox20->Text;
			 bool iga0 = Single::TryParse(Sga0,Fga0);
			 if(!iga0){
				textBox20->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox20->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox17_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sgb0=textBox17->Text;
			 bool igb0 = Single::TryParse(Sgb0,Fgb0);
			 if(!igb0){
				textBox17->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox17->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			String ^Sgc0=textBox15->Text;
			 bool igc0 = Single::TryParse(Sgc0,Fgc0);
			 if(!igc0){
				textBox15->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox15->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sga1=textBox19->Text;
			 bool iga1 = Single::TryParse(Sga1,Fga1);
			 if(!iga1){
				textBox19->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox19->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sgb1=textBox18->Text;
			 bool igb1 = Single::TryParse(Sgb1,Fgb1);
			 if(!igb1){
				textBox18->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox18->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sgc1=textBox16->Text;
			 bool igc1 = Single::TryParse(Sgc1,Fgc1);
			 if(!igc1){
				textBox16->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox16->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox23_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sga2=textBox23->Text;
			 bool iga2 = Single::TryParse(Sga2,Fga2);
			 if(!iga2){
				textBox23->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox23->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox22_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sgb2=textBox22->Text;
			 bool igb2 = Single::TryParse(Sgb2,Fgb2);
			 if(!igb2){
				textBox22->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox22->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sgc2=textBox21->Text;
			 bool igc2 = Single::TryParse(Sgc2,Fgc2);
			 if(!igc2){
				textBox21->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 changed();
				textBox21->BackColor=System::Drawing::Color::White;
			 }
		 }
private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sk0=textBox25->Text;
			 bool ik0 = Single::TryParse(Sk0,Fk0);
			 if(!ik0){
				textBox25->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 if(Fk0<=0){
					 textBox25->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;
				 }else{
				 changed();
				 textBox25->BackColor=System::Drawing::Color::White;}
			 }
		 }
private: System::Void textBox24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^Sdk=textBox24->Text;
			 bool idk = Single::TryParse(Sdk,Fdk);
			 if(!idk){
				textBox24->BackColor=System::Drawing::Color::Red;
				ButtPrint->Enabled=false;
			 }
			 else{
				 if(Fdk-1<=0){
					 textBox24->BackColor=System::Drawing::Color::Red;
					ButtPrint->Enabled=false;
				 }else{
				 changed();
				 textBox24->BackColor=System::Drawing::Color::White;}
			 }
		 }
};
}

