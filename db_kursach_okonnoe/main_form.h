#include "_classes.h"
#pragma once

int Y_TABPAGE15, Y_TABPAGE16;
Religion* faith_list, __r;
Gender* sex_list, __y;
Nationality* Nation_list, __d;
WorkType* work_list, __l;
ComfortLevel* comfort_list, __t;
Sector* sector_list, __e;
Barrack* barack_list, __g;
Guard* guards, __q;
Prisoner* p_list, __o;
BossOfSector* boss, __f;
PrisonerBarrack* p_b_list, __w;
GuardWorkplace* g_b_list, __z;

namespace dbkursachokonnoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main_form
	/// </summary>
	public ref class main_form : public System::Windows::Forms::Form
	{
	public:
		
		main_form(void)
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
		~main_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ListBox^ listBox2;






	private:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;








	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьДанныеToolStripMenuItem;



































	private: System::Windows::Forms::Button^ button1;












private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::ComboBox^ comboBox9;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::ComboBox^ comboBox8;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown9;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::ComboBox^ comboBox10;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::ComboBox^ comboBox11;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::ComboBox^ comboBox12;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker6;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::NumericUpDown^ numericUpDown10;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
public: System::Windows::Forms::TabPage^ tabPage8;
private:
private: System::Windows::Forms::Button^ button8;
public:
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TabPage^ tabPage11;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::NumericUpDown^ numericUpDown12;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::ComboBox^ comboBox14;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::ComboBox^ comboBox15;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::TabPage^ tabPage12;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::NumericUpDown^ numericUpDown11;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::ComboBox^ comboBox13;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::TabPage^ tabPage13;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::TabPage^ tabPage14;
private: System::Windows::Forms::ComboBox^ comboBox16;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::TextBox^ textBox43;
private: System::Windows::Forms::TabPage^ tabPage15;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::TabPage^ tabPage16;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button39;

private: System::Windows::Forms::Button^ button40;













































































































































































































































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main_form::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьДанныеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			this->tabPage13->SuspendLayout();
			this->tabPage14->SuspendLayout();
			this->tabPage15->SuspendLayout();
			this->tabPage16->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(158, 307);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Таблицы";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Национальность", L"Религия", L"Пол", L"Уровни комфорта",
					L"Заключенные", L"Личный состав", L"Кто где сидит", L"Сектора", L"Бараки", L"Виды работ", L"Начальники секторов", L"Кто в каком бараке служит",
					L"Сектора_ленточная", L"Национальности_ленточная"
			});
			this->listBox1->Location = System::Drawing::Point(6, 21);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(146, 260);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::listBox1_SelectedIndexChanged);
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &main_form::listBox1_DoubleClick);
			this->listBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main_form::listBox1_MouseDoubleClick);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tabControl1);
			this->groupBox2->Location = System::Drawing::Point(176, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1020, 487);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &main_form::groupBox2_Enter);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage10);
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Controls->Add(this->tabPage13);
			this->tabControl1->Controls->Add(this->tabPage14);
			this->tabControl1->Controls->Add(this->tabPage15);
			this->tabControl1->Controls->Add(this->tabPage16);
			this->tabControl1->Location = System::Drawing::Point(6, 18);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1008, 455);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::tabControl1_SelectedIndexChanged);
			this->tabControl1->Selecting += gcnew System::Windows::Forms::TabControlCancelEventHandler(this, &main_form::tabControl1_Selecting);
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &main_form::tabControl1_Selected);
			this->tabControl1->TabIndexChanged += gcnew System::EventHandler(this, &main_form::tabControl1_TabIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->textBox43);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->numericUpDown1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1000, 426);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Национальность";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &main_form::tabPage1_Click);
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(636, 197);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(100, 22);
			this->textBox43->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(340, 161);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 32);
			this->button5->TabIndex = 9;
			this->button5->Text = L">\r\n";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main_form::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(264, 160);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 32);
			this->button6->TabIndex = 8;
			this->button6->Text = L"<";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &main_form::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(155, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &main_form::textBox1_TextChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(155, 44);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Id:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Национальность:";
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->numericUpDown2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1000, 426);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Религия";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(204, 161);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 32);
			this->button4->TabIndex = 16;
			this->button4->Text = L">\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main_form::button4_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(135, 161);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 32);
			this->button7->TabIndex = 15;
			this->button7->Text = L"<";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &main_form::button7_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(314, 22);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &main_form::textBox2_TextChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(147, 44);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 13;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Id:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Религия:";
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->numericUpDown3);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1000, 426);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Пол";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(208, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 32);
			this->button9->TabIndex = 16;
			this->button9->Text = L">\r\n";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &main_form::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(139, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 32);
			this->button10->TabIndex = 15;
			this->button10->Text = L"<";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &main_form::button10_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(151, 89);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(314, 22);
			this->textBox3->TabIndex = 14;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &main_form::textBox3_TextChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(151, 45);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->ReadOnly = true;
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 13;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(85, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Id:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Пол:";
			// 
			// tabPage4
			// 
			this->tabPage4->AutoScroll = true;
			this->tabPage4->Controls->Add(this->button12);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Controls->Add(this->textBox4);
			this->tabPage4->Controls->Add(this->numericUpDown4);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1000, 426);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Уровни комфорта";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(204, 163);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 32);
			this->button12->TabIndex = 16;
			this->button12->Text = L">\r\n";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &main_form::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(135, 163);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 32);
			this->button13->TabIndex = 15;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &main_form::button13_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(147, 90);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(314, 22);
			this->textBox4->TabIndex = 14;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &main_form::textBox4_TextChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(147, 46);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->ReadOnly = true;
			this->numericUpDown4->Size = System::Drawing::Size(120, 22);
			this->numericUpDown4->TabIndex = 13;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(81, 46);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Id:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Уровень комфорта:";
			// 
			// tabPage5
			// 
			this->tabPage5->AutoScroll = true;
			this->tabPage5->Controls->Add(this->numericUpDown8);
			this->tabPage5->Controls->Add(this->button18);
			this->tabPage5->Controls->Add(this->button21);
			this->tabPage5->Controls->Add(this->button24);
			this->tabPage5->Controls->Add(this->label59);
			this->tabPage5->Controls->Add(this->textBox31);
			this->tabPage5->Controls->Add(this->textBox21);
			this->tabPage5->Controls->Add(this->textBox22);
			this->tabPage5->Controls->Add(this->textBox20);
			this->tabPage5->Controls->Add(this->textBox15);
			this->tabPage5->Controls->Add(this->textBox16);
			this->tabPage5->Controls->Add(this->textBox17);
			this->tabPage5->Controls->Add(this->textBox18);
			this->tabPage5->Controls->Add(this->textBox19);
			this->tabPage5->Controls->Add(this->comboBox9);
			this->tabPage5->Controls->Add(this->label43);
			this->tabPage5->Controls->Add(this->comboBox8);
			this->tabPage5->Controls->Add(this->label42);
			this->tabPage5->Controls->Add(this->comboBox7);
			this->tabPage5->Controls->Add(this->label41);
			this->tabPage5->Controls->Add(this->label40);
			this->tabPage5->Controls->Add(this->dateTimePicker3);
			this->tabPage5->Controls->Add(this->label39);
			this->tabPage5->Controls->Add(this->dateTimePicker2);
			this->tabPage5->Controls->Add(this->label37);
			this->tabPage5->Controls->Add(this->label38);
			this->tabPage5->Controls->Add(this->label36);
			this->tabPage5->Controls->Add(this->label30);
			this->tabPage5->Controls->Add(this->label35);
			this->tabPage5->Controls->Add(this->label29);
			this->tabPage5->Controls->Add(this->dateTimePicker1);
			this->tabPage5->Controls->Add(this->label31);
			this->tabPage5->Controls->Add(this->label32);
			this->tabPage5->Controls->Add(this->label33);
			this->tabPage5->Controls->Add(this->label34);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1000, 426);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Заключенные";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(199, 32);
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->ReadOnly = true;
			this->numericUpDown8->Size = System::Drawing::Size(120, 22);
			this->numericUpDown8->TabIndex = 116;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(498, 349);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(90, 33);
			this->button18->TabIndex = 115;
			this->button18->Text = L"Записать";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &main_form::button18_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(617, 350);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 32);
			this->button21->TabIndex = 114;
			this->button21->Text = L">\r\n";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &main_form::button21_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(428, 349);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(50, 32);
			this->button24->TabIndex = 113;
			this->button24->Text = L"<";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &main_form::button24_Click);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(53, 336);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(122, 17);
			this->label59->TabIndex = 112;
			this->label59->Text = L"Место рождения:";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(199, 336);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(121, 22);
			this->textBox31->TabIndex = 111;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(566, 112);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(121, 22);
			this->textBox21->TabIndex = 67;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(566, 71);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(121, 22);
			this->textBox22->TabIndex = 65;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(199, 298);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(121, 22);
			this->textBox20->TabIndex = 63;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(199, 257);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(121, 22);
			this->textBox15->TabIndex = 61;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(199, 221);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(121, 22);
			this->textBox16->TabIndex = 59;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(199, 142);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(121, 22);
			this->textBox17->TabIndex = 55;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(199, 106);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(121, 22);
			this->textBox18->TabIndex = 53;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(199, 71);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(121, 22);
			this->textBox19->TabIndex = 51;
			// 
			// comboBox9
			// 
			this->comboBox9->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(566, 310);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(121, 24);
			this->comboBox9->TabIndex = 78;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox9_SelectedIndexChanged);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(420, 313);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(38, 17);
			this->label43->TabIndex = 77;
			this->label43->Text = L"Пол:";
			// 
			// comboBox8
			// 
			this->comboBox8->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(566, 270);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(121, 24);
			this->comboBox8->TabIndex = 76;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(420, 273);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(131, 17);
			this->label42->TabIndex = 75;
			this->label42->Text = L"Вероисповедание:";
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(566, 230);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 24);
			this->comboBox7->TabIndex = 74;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(420, 233);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(122, 17);
			this->label41->TabIndex = 73;
			this->label41->Text = L"Национальность:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(420, 202);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(131, 17);
			this->label40->TabIndex = 72;
			this->label40->Text = L"Дата конца срока:";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(566, 202);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker3->TabIndex = 71;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(420, 158);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(140, 17);
			this->label39->TabIndex = 70;
			this->label39->Text = L"Дата начала срока:";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(566, 158);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker2->TabIndex = 69;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(420, 112);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(44, 17);
			this->label37->TabIndex = 68;
			this->label37->Text = L"Срок:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(420, 71);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(58, 17);
			this->label38->TabIndex = 66;
			this->label38->Text = L"Статья:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(53, 298);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(140, 17);
			this->label36->TabIndex = 64;
			this->label36->Text = L"Место регистрации:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(53, 257);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(121, 17);
			this->label30->TabIndex = 62;
			this->label30->Text = L"Номер паспорта:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(53, 221);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(119, 17);
			this->label35->TabIndex = 60;
			this->label35->Text = L"Серия паспорта:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(53, 188);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(115, 17);
			this->label29->TabIndex = 58;
			this->label29->Text = L"Дата рождения:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(199, 188);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 57;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(53, 142);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(75, 17);
			this->label31->TabIndex = 56;
			this->label31->Text = L"Отчество:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(53, 106);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(39, 17);
			this->label32->TabIndex = 54;
			this->label32->Text = L"Имя:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(53, 71);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(74, 17);
			this->label33->TabIndex = 52;
			this->label33->Text = L"Фамилия:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(53, 32);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(124, 17);
			this->label34->TabIndex = 49;
			this->label34->Text = L"id_заключенного:";
			// 
			// tabPage6
			// 
			this->tabPage6->AutoScroll = true;
			this->tabPage6->Controls->Add(this->numericUpDown9);
			this->tabPage6->Controls->Add(this->button25);
			this->tabPage6->Controls->Add(this->button26);
			this->tabPage6->Controls->Add(this->button27);
			this->tabPage6->Controls->Add(this->comboBox10);
			this->tabPage6->Controls->Add(this->label44);
			this->tabPage6->Controls->Add(this->comboBox11);
			this->tabPage6->Controls->Add(this->label45);
			this->tabPage6->Controls->Add(this->comboBox12);
			this->tabPage6->Controls->Add(this->label46);
			this->tabPage6->Controls->Add(this->label50);
			this->tabPage6->Controls->Add(this->textBox24);
			this->tabPage6->Controls->Add(this->textBox25);
			this->tabPage6->Controls->Add(this->textBox26);
			this->tabPage6->Controls->Add(this->textBox27);
			this->tabPage6->Controls->Add(this->textBox28);
			this->tabPage6->Controls->Add(this->textBox29);
			this->tabPage6->Controls->Add(this->textBox30);
			this->tabPage6->Controls->Add(this->label51);
			this->tabPage6->Controls->Add(this->label52);
			this->tabPage6->Controls->Add(this->label53);
			this->tabPage6->Controls->Add(this->label54);
			this->tabPage6->Controls->Add(this->dateTimePicker6);
			this->tabPage6->Controls->Add(this->label55);
			this->tabPage6->Controls->Add(this->label56);
			this->tabPage6->Controls->Add(this->label57);
			this->tabPage6->Controls->Add(this->label58);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(1000, 426);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Личный состав";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(210, 36);
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->ReadOnly = true;
			this->numericUpDown9->Size = System::Drawing::Size(120, 22);
			this->numericUpDown9->TabIndex = 112;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(523, 270);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(90, 33);
			this->button25->TabIndex = 111;
			this->button25->Text = L"Записать";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &main_form::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(642, 271);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(50, 32);
			this->button26->TabIndex = 110;
			this->button26->Text = L">\r\n";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &main_form::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(453, 270);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(50, 32);
			this->button27->TabIndex = 109;
			this->button27->Text = L"<";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &main_form::button27_Click);
			// 
			// comboBox10
			// 
			this->comboBox10->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(576, 190);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(121, 24);
			this->comboBox10->TabIndex = 108;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(430, 193);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(38, 17);
			this->label44->TabIndex = 107;
			this->label44->Text = L"Пол:";
			// 
			// comboBox11
			// 
			this->comboBox11->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Location = System::Drawing::Point(576, 150);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(121, 24);
			this->comboBox11->TabIndex = 106;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(430, 153);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(131, 17);
			this->label45->TabIndex = 105;
			this->label45->Text = L"Вероисповедание:";
			// 
			// comboBox12
			// 
			this->comboBox12->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(576, 110);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(121, 24);
			this->comboBox12->TabIndex = 104;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(430, 113);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(122, 17);
			this->label46->TabIndex = 103;
			this->label46->Text = L"Национальность:";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(430, 77);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(60, 17);
			this->label50->TabIndex = 96;
			this->label50->Text = L"Звание:";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(576, 77);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(121, 22);
			this->textBox24->TabIndex = 95;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(209, 304);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(121, 22);
			this->textBox25->TabIndex = 93;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(209, 263);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(121, 22);
			this->textBox26->TabIndex = 91;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(209, 227);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(121, 22);
			this->textBox27->TabIndex = 89;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(209, 148);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(121, 22);
			this->textBox28->TabIndex = 85;
			this->textBox28->TextChanged += gcnew System::EventHandler(this, &main_form::textBox28_TextChanged);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(209, 112);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(121, 22);
			this->textBox29->TabIndex = 83;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(209, 77);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(121, 22);
			this->textBox30->TabIndex = 81;
			this->textBox30->TextChanged += gcnew System::EventHandler(this, &main_form::textBox30_TextChanged);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(63, 304);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(140, 17);
			this->label51->TabIndex = 94;
			this->label51->Text = L"Место регистрации:";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(63, 263);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(121, 17);
			this->label52->TabIndex = 92;
			this->label52->Text = L"Номер паспорта:";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(63, 227);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(119, 17);
			this->label53->TabIndex = 90;
			this->label53->Text = L"Серия паспорта:";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(63, 194);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(115, 17);
			this->label54->TabIndex = 88;
			this->label54->Text = L"Дата рождения:";
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->Location = System::Drawing::Point(209, 194);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker6->TabIndex = 87;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(63, 148);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(75, 17);
			this->label55->TabIndex = 86;
			this->label55->Text = L"Отчество:";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(63, 112);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(39, 17);
			this->label56->TabIndex = 84;
			this->label56->Text = L"Имя:";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(63, 77);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(74, 17);
			this->label57->TabIndex = 82;
			this->label57->Text = L"Фамилия:";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(63, 38);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(117, 17);
			this->label58->TabIndex = 79;
			this->label58->Text = L"id_надзирателя:";
			// 
			// tabPage7
			// 
			this->tabPage7->AutoScroll = true;
			this->tabPage7->Controls->Add(this->button22);
			this->tabPage7->Controls->Add(this->numericUpDown10);
			this->tabPage7->Controls->Add(this->label26);
			this->tabPage7->Controls->Add(this->textBox13);
			this->tabPage7->Controls->Add(this->textBox14);
			this->tabPage7->Controls->Add(this->textBox11);
			this->tabPage7->Controls->Add(this->textBox10);
			this->tabPage7->Controls->Add(this->textBox9);
			this->tabPage7->Controls->Add(this->textBox8);
			this->tabPage7->Controls->Add(this->label27);
			this->tabPage7->Controls->Add(this->comboBox5);
			this->tabPage7->Controls->Add(this->label28);
			this->tabPage7->Controls->Add(this->label24);
			this->tabPage7->Controls->Add(this->label23);
			this->tabPage7->Controls->Add(this->label22);
			this->tabPage7->Controls->Add(this->label21);
			this->tabPage7->Controls->Add(this->comboBox4);
			this->tabPage7->Controls->Add(this->label20);
			this->tabPage7->Controls->Add(this->button19);
			this->tabPage7->Controls->Add(this->button20);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1000, 426);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Кто где сидит";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(255, 193);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(90, 33);
			this->button22->TabIndex = 116;
			this->button22->Text = L"Записать";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &main_form::button22_Click);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(672, 298);
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(120, 22);
			this->numericUpDown10->TabIndex = 55;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(34, 113);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(137, 17);
			this->label26->TabIndex = 54;
			this->label26->Text = L"Уровень комфорта:";
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(195, 79);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(121, 22);
			this->textBox13->TabIndex = 53;
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(195, 113);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(121, 22);
			this->textBox14->TabIndex = 51;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(585, 167);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 22);
			this->textBox11->TabIndex = 45;
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(585, 128);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(121, 22);
			this->textBox10->TabIndex = 43;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(585, 92);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(121, 22);
			this->textBox9->TabIndex = 41;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &main_form::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(585, 57);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(121, 22);
			this->textBox8->TabIndex = 39;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(34, 78);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(110, 17);
			this->label27->TabIndex = 52;
			this->label27->Text = L"Наименование:";
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(195, 15);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 24);
			this->comboBox5->TabIndex = 50;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox5_SelectedIndexChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(34, 18);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(78, 17);
			this->label28->TabIndex = 49;
			this->label28->Text = L"id_барака:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(456, 167);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(58, 17);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Статья:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(456, 128);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(75, 17);
			this->label23->TabIndex = 44;
			this->label23->Text = L"Отчество:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(456, 92);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(39, 17);
			this->label22->TabIndex = 42;
			this->label22->Text = L"Имя:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(456, 57);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(74, 17);
			this->label21->TabIndex = 40;
			this->label21->Text = L"Фамилия:";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(585, 15);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 24);
			this->comboBox4->TabIndex = 38;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox4_SelectedIndexChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(456, 18);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(124, 17);
			this->label20->TabIndex = 37;
			this->label20->Text = L"id_заключенного:";
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(361, 194);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(50, 32);
			this->button19->TabIndex = 35;
			this->button19->Text = L">\r\n";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &main_form::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(195, 193);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(50, 32);
			this->button20->TabIndex = 34;
			this->button20->Text = L"<";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &main_form::button20_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->AutoScroll = true;
			this->tabPage8->Controls->Add(this->button8);
			this->tabPage8->Controls->Add(this->label14);
			this->tabPage8->Controls->Add(this->button2);
			this->tabPage8->Controls->Add(this->button3);
			this->tabPage8->Controls->Add(this->textBox6);
			this->tabPage8->Controls->Add(this->numericUpDown6);
			this->tabPage8->Controls->Add(this->label12);
			this->tabPage8->Controls->Add(this->label13);
			this->tabPage8->Controls->Add(this->comboBox1);
			this->tabPage8->ImeMode = System::Windows::Forms::ImeMode::On;
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1000, 426);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Сектора";
			this->tabPage8->UseVisualStyleBackColor = true;
			this->tabPage8->Click += gcnew System::EventHandler(this, &main_form::tabPage8_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(211, 173);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 33);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Записать";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &main_form::button8_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(87, 118);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 17);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Вид работ:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(330, 174);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 32);
			this->button2->TabIndex = 22;
			this->button2->Text = L">\r\n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main_form::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(141, 173);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 32);
			this->button3->TabIndex = 21;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main_form::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(180, 72);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(314, 22);
			this->textBox6->TabIndex = 20;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(189, 28);
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->ReadOnly = true;
			this->numericUpDown6->Size = System::Drawing::Size(120, 22);
			this->numericUpDown6->TabIndex = 19;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(138, 30);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 17);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Id:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 72);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(167, 17);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Наименование сектора:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(180, 115);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox1_SelectedIndexChanged);
			// 
			// tabPage9
			// 
			this->tabPage9->AutoScroll = true;
			this->tabPage9->Controls->Add(this->label19);
			this->tabPage9->Controls->Add(this->comboBox3);
			this->tabPage9->Controls->Add(this->button11);
			this->tabPage9->Controls->Add(this->label16);
			this->tabPage9->Controls->Add(this->button14);
			this->tabPage9->Controls->Add(this->button17);
			this->tabPage9->Controls->Add(this->textBox7);
			this->tabPage9->Controls->Add(this->numericUpDown7);
			this->tabPage9->Controls->Add(this->label17);
			this->tabPage9->Controls->Add(this->label18);
			this->tabPage9->Controls->Add(this->comboBox2);
			this->tabPage9->Location = System::Drawing::Point(4, 25);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(1000, 426);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Бараки";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(76, 129);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 17);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Сектор:";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(177, 164);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 24);
			this->comboBox3->TabIndex = 34;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(208, 231);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 33);
			this->button11->TabIndex = 33;
			this->button11->Text = L"Записать";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &main_form::button11_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(21, 164);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(137, 17);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Уровень комфорта:";
			this->label16->Click += gcnew System::EventHandler(this, &main_form::label16_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(327, 232);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 32);
			this->button14->TabIndex = 31;
			this->button14->Text = L">\r\n";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &main_form::button14_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(138, 231);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 32);
			this->button17->TabIndex = 30;
			this->button17->Text = L"<";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &main_form::button17_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(177, 79);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(314, 22);
			this->textBox7->TabIndex = 29;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &main_form::textBox7_TextChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(186, 35);
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->ReadOnly = true;
			this->numericUpDown7->Size = System::Drawing::Size(120, 22);
			this->numericUpDown7->TabIndex = 28;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &main_form::numericUpDown7_ValueChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(135, 37);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(23, 17);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Id:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(14, 79);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(167, 17);
			this->label18->TabIndex = 26;
			this->label18->Text = L"Наименование сектора:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(177, 122);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 25;
			// 
			// tabPage10
			// 
			this->tabPage10->AutoScroll = true;
			this->tabPage10->Controls->Add(this->button15);
			this->tabPage10->Controls->Add(this->button16);
			this->tabPage10->Controls->Add(this->textBox5);
			this->tabPage10->Controls->Add(this->numericUpDown5);
			this->tabPage10->Controls->Add(this->label9);
			this->tabPage10->Controls->Add(this->label10);
			this->tabPage10->Location = System::Drawing::Point(4, 25);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(1000, 426);
			this->tabPage10->TabIndex = 9;
			this->tabPage10->Text = L"Виды работ";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(209, 162);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 32);
			this->button15->TabIndex = 16;
			this->button15->Text = L">\r\n";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &main_form::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(140, 162);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 32);
			this->button16->TabIndex = 15;
			this->button16->Text = L"<";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &main_form::button16_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(152, 89);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(314, 22);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &main_form::textBox5_TextChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(152, 45);
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->ReadOnly = true;
			this->numericUpDown5->Size = System::Drawing::Size(120, 22);
			this->numericUpDown5->TabIndex = 13;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(86, 45);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 17);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Id:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(46, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 17);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Вид работы:";
			// 
			// tabPage11
			// 
			this->tabPage11->AutoScroll = true;
			this->tabPage11->Controls->Add(this->button30);
			this->tabPage11->Controls->Add(this->numericUpDown12);
			this->tabPage11->Controls->Add(this->label63);
			this->tabPage11->Controls->Add(this->textBox36);
			this->tabPage11->Controls->Add(this->textBox37);
			this->tabPage11->Controls->Add(this->textBox38);
			this->tabPage11->Controls->Add(this->textBox39);
			this->tabPage11->Controls->Add(this->textBox40);
			this->tabPage11->Controls->Add(this->textBox41);
			this->tabPage11->Controls->Add(this->label64);
			this->tabPage11->Controls->Add(this->comboBox14);
			this->tabPage11->Controls->Add(this->label65);
			this->tabPage11->Controls->Add(this->label66);
			this->tabPage11->Controls->Add(this->label67);
			this->tabPage11->Controls->Add(this->label68);
			this->tabPage11->Controls->Add(this->label69);
			this->tabPage11->Controls->Add(this->comboBox15);
			this->tabPage11->Controls->Add(this->label70);
			this->tabPage11->Controls->Add(this->button31);
			this->tabPage11->Controls->Add(this->button32);
			this->tabPage11->Location = System::Drawing::Point(4, 25);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1000, 426);
			this->tabPage11->TabIndex = 10;
			this->tabPage11->Text = L"Начальники секторов";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(250, 198);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(90, 33);
			this->button30->TabIndex = 157;
			this->button30->Text = L"Записать";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &main_form::button30_Click);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(809, 318);
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(120, 22);
			this->numericUpDown12->TabIndex = 156;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(29, 118);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(80, 17);
			this->label63->TabIndex = 155;
			this->label63->Text = L"Вид работ:";
			// 
			// textBox36
			// 
			this->textBox36->Enabled = false;
			this->textBox36->Location = System::Drawing::Point(190, 84);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(121, 22);
			this->textBox36->TabIndex = 154;
			// 
			// textBox37
			// 
			this->textBox37->Enabled = false;
			this->textBox37->Location = System::Drawing::Point(190, 118);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(121, 22);
			this->textBox37->TabIndex = 152;
			// 
			// textBox38
			// 
			this->textBox38->Enabled = false;
			this->textBox38->Location = System::Drawing::Point(580, 172);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(121, 22);
			this->textBox38->TabIndex = 148;
			// 
			// textBox39
			// 
			this->textBox39->Enabled = false;
			this->textBox39->Location = System::Drawing::Point(580, 133);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(121, 22);
			this->textBox39->TabIndex = 146;
			// 
			// textBox40
			// 
			this->textBox40->Enabled = false;
			this->textBox40->Location = System::Drawing::Point(580, 97);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(121, 22);
			this->textBox40->TabIndex = 144;
			// 
			// textBox41
			// 
			this->textBox41->Enabled = false;
			this->textBox41->Location = System::Drawing::Point(580, 62);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(121, 22);
			this->textBox41->TabIndex = 142;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(29, 83);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(110, 17);
			this->label64->TabIndex = 153;
			this->label64->Text = L"Наименование:";
			// 
			// comboBox14
			// 
			this->comboBox14->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Location = System::Drawing::Point(190, 20);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(121, 24);
			this->comboBox14->TabIndex = 151;
			this->comboBox14->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox14_SelectedIndexChanged);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(29, 23);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(84, 17);
			this->label65->TabIndex = 150;
			this->label65->Text = L"id_сектора:";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(451, 172);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(60, 17);
			this->label66->TabIndex = 149;
			this->label66->Text = L"Звание:";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(451, 133);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(75, 17);
			this->label67->TabIndex = 147;
			this->label67->Text = L"Отчество:";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(451, 97);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(39, 17);
			this->label68->TabIndex = 145;
			this->label68->Text = L"Имя:";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(451, 62);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(74, 17);
			this->label69->TabIndex = 143;
			this->label69->Text = L"Фамилия:";
			// 
			// comboBox15
			// 
			this->comboBox15->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Location = System::Drawing::Point(580, 20);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(121, 24);
			this->comboBox15->TabIndex = 141;
			this->comboBox15->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox15_SelectedIndexChanged);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(451, 23);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(117, 17);
			this->label70->TabIndex = 140;
			this->label70->Text = L"id_надзирателя:";
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(356, 199);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(50, 32);
			this->button31->TabIndex = 139;
			this->button31->Text = L">\r\n";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &main_form::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(190, 198);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(50, 32);
			this->button32->TabIndex = 138;
			this->button32->Text = L"<";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &main_form::button32_Click);
			// 
			// tabPage12
			// 
			this->tabPage12->AutoScroll = true;
			this->tabPage12->Controls->Add(this->checkBox1);
			this->tabPage12->Controls->Add(this->button23);
			this->tabPage12->Controls->Add(this->numericUpDown11);
			this->tabPage12->Controls->Add(this->label11);
			this->tabPage12->Controls->Add(this->textBox12);
			this->tabPage12->Controls->Add(this->textBox23);
			this->tabPage12->Controls->Add(this->textBox32);
			this->tabPage12->Controls->Add(this->textBox33);
			this->tabPage12->Controls->Add(this->textBox34);
			this->tabPage12->Controls->Add(this->textBox35);
			this->tabPage12->Controls->Add(this->label25);
			this->tabPage12->Controls->Add(this->comboBox6);
			this->tabPage12->Controls->Add(this->label47);
			this->tabPage12->Controls->Add(this->label48);
			this->tabPage12->Controls->Add(this->label49);
			this->tabPage12->Controls->Add(this->label60);
			this->tabPage12->Controls->Add(this->label61);
			this->tabPage12->Controls->Add(this->comboBox13);
			this->tabPage12->Controls->Add(this->label62);
			this->tabPage12->Controls->Add(this->button28);
			this->tabPage12->Controls->Add(this->button29);
			this->tabPage12->Location = System::Drawing::Point(4, 25);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1000, 426);
			this->tabPage12->TabIndex = 11;
			this->tabPage12->Text = L"Кто в каком бараке служит";
			this->tabPage12->UseVisualStyleBackColor = true;
			this->tabPage12->Click += gcnew System::EventHandler(this, &main_form::tabPage12_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(510, 221);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(153, 21);
			this->checkBox1->TabIndex = 137;
			this->checkBox1->Text = L"Начальник барака";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(256, 211);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(90, 33);
			this->button23->TabIndex = 136;
			this->button23->Text = L"Записать";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &main_form::button23_Click_1);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(815, 331);
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(120, 22);
			this->numericUpDown11->TabIndex = 135;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(35, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 17);
			this->label11->TabIndex = 134;
			this->label11->Text = L"Уровень комфорта:";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(196, 97);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(121, 22);
			this->textBox12->TabIndex = 133;
			// 
			// textBox23
			// 
			this->textBox23->Enabled = false;
			this->textBox23->Location = System::Drawing::Point(196, 131);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(121, 22);
			this->textBox23->TabIndex = 131;
			// 
			// textBox32
			// 
			this->textBox32->Enabled = false;
			this->textBox32->Location = System::Drawing::Point(586, 185);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(121, 22);
			this->textBox32->TabIndex = 127;
			// 
			// textBox33
			// 
			this->textBox33->Enabled = false;
			this->textBox33->Location = System::Drawing::Point(586, 146);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(121, 22);
			this->textBox33->TabIndex = 125;
			// 
			// textBox34
			// 
			this->textBox34->Enabled = false;
			this->textBox34->Location = System::Drawing::Point(586, 110);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(121, 22);
			this->textBox34->TabIndex = 123;
			// 
			// textBox35
			// 
			this->textBox35->Enabled = false;
			this->textBox35->Location = System::Drawing::Point(586, 75);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(121, 22);
			this->textBox35->TabIndex = 121;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(35, 96);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(110, 17);
			this->label25->TabIndex = 132;
			this->label25->Text = L"Наименование:";
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(196, 33);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 24);
			this->comboBox6->TabIndex = 130;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox6_SelectedIndexChanged);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(35, 36);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(78, 17);
			this->label47->TabIndex = 129;
			this->label47->Text = L"id_барака:";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(457, 185);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(60, 17);
			this->label48->TabIndex = 128;
			this->label48->Text = L"Звание:";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(457, 146);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(75, 17);
			this->label49->TabIndex = 126;
			this->label49->Text = L"Отчество:";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(457, 110);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(39, 17);
			this->label60->TabIndex = 124;
			this->label60->Text = L"Имя:";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(457, 75);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(74, 17);
			this->label61->TabIndex = 122;
			this->label61->Text = L"Фамилия:";
			// 
			// comboBox13
			// 
			this->comboBox13->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(586, 33);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(121, 24);
			this->comboBox13->TabIndex = 120;
			this->comboBox13->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::comboBox13_SelectedIndexChanged);
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(457, 36);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(117, 17);
			this->label62->TabIndex = 119;
			this->label62->Text = L"id_надзирателя:";
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(362, 212);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(50, 32);
			this->button28->TabIndex = 118;
			this->button28->Text = L">\r\n";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &main_form::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(196, 211);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(50, 32);
			this->button29->TabIndex = 117;
			this->button29->Text = L"<";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &main_form::button29_Click);
			// 
			// tabPage13
			// 
			this->tabPage13->AutoScroll = true;
			this->tabPage13->Controls->Add(this->label71);
			this->tabPage13->Controls->Add(this->textBox42);
			this->tabPage13->Controls->Add(this->button33);
			this->tabPage13->Location = System::Drawing::Point(4, 25);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(1000, 426);
			this->tabPage13->TabIndex = 12;
			this->tabPage13->Text = L"Поиск по званию";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(178, 98);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(60, 17);
			this->label71->TabIndex = 2;
			this->label71->Text = L"Звание:";
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(244, 95);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(100, 22);
			this->textBox42->TabIndex = 1;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(360, 95);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 23);
			this->button33->TabIndex = 0;
			this->button33->Text = L"Поиск";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &main_form::button33_Click);
			// 
			// tabPage14
			// 
			this->tabPage14->AutoScroll = true;
			this->tabPage14->Controls->Add(this->comboBox16);
			this->tabPage14->Controls->Add(this->label72);
			this->tabPage14->Controls->Add(this->button34);
			this->tabPage14->Location = System::Drawing::Point(4, 25);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(1000, 426);
			this->tabPage14->TabIndex = 13;
			this->tabPage14->Text = L"Поиск по бараку";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// comboBox16
			// 
			this->comboBox16->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Location = System::Drawing::Point(178, 86);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(121, 24);
			this->comboBox16->TabIndex = 6;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(123, 89);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(52, 17);
			this->label72->TabIndex = 5;
			this->label72->Text = L"Барак:";
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(305, 86);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 23);
			this->button34->TabIndex = 3;
			this->button34->Text = L"Поиск";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &main_form::button34_Click);
			// 
			// tabPage15
			// 
			this->tabPage15->AutoScroll = true;
			this->tabPage15->Controls->Add(this->button37);
			this->tabPage15->Controls->Add(this->button36);
			this->tabPage15->Controls->Add(this->label73);
			this->tabPage15->Controls->Add(this->button35);
			this->tabPage15->Location = System::Drawing::Point(4, 25);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(1000, 426);
			this->tabPage15->TabIndex = 14;
			this->tabPage15->Text = L"Сектора_ленточная";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Enabled = false;
			this->button37->Location = System::Drawing::Point(862, 85);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(109, 29);
			this->button37->TabIndex = 3;
			this->button37->Text = L"Записать";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Enabled = false;
			this->button36->Location = System::Drawing::Point(862, 53);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(109, 26);
			this->button36->TabIndex = 2;
			this->button36->Text = L"Создать запись";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &main_form::button36_Click);
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(21, 283);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(54, 17);
			this->label73->TabIndex = 1;
			this->label73->Text = L"label73";
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(862, 17);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(109, 29);
			this->button35->TabIndex = 0;
			this->button35->Text = L"Отобразить";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &main_form::button35_Click);
			// 
			// tabPage16
			// 
			this->tabPage16->AutoScroll = true;
			this->tabPage16->Controls->Add(this->button38);
			this->tabPage16->Controls->Add(this->button39);
			this->tabPage16->Controls->Add(this->button40);
			this->tabPage16->Location = System::Drawing::Point(4, 25);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(1000, 426);
			this->tabPage16->TabIndex = 15;
			this->tabPage16->Text = L"Национальности_ленточная";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Enabled = false;
			this->button38->Location = System::Drawing::Point(862, 85);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(109, 29);
			this->button38->TabIndex = 3;
			this->button38->Text = L"Записать";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Enabled = false;
			this->button39->Location = System::Drawing::Point(862, 53);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(109, 26);
			this->button39->TabIndex = 2;
			this->button39->Text = L"Создать запись";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(862, 17);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(109, 29);
			this->button40->TabIndex = 0;
			this->button40->Text = L"Отобразить";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &main_form::button40_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->listBox2);
			this->groupBox3->Location = System::Drawing::Point(12, 344);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(158, 174);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Запросы";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &main_form::groupBox3_Enter);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Поиск по званию", L"Поиск по бараку" });
			this->listBox2->Location = System::Drawing::Point(6, 28);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(146, 132);
			this->listBox2->TabIndex = 0;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &main_form::listBox2_SelectedIndexChanged);
			this->listBox2->DoubleClick += gcnew System::EventHandler(this, &main_form::listBox2_DoubleClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1231, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &main_form::menuStrip1_ItemClicked);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->сохранитьДанныеToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьДанныеToolStripMenuItem
			// 
			this->сохранитьДанныеToolStripMenuItem->Name = L"сохранитьДанныеToolStripMenuItem";
			this->сохранитьДанныеToolStripMenuItem->Size = System::Drawing::Size(232, 26);
			this->сохранитьДанныеToolStripMenuItem->Text = L"Сохранить данные...";
			this->сохранитьДанныеToolStripMenuItem->Click += gcnew System::EventHandler(this, &main_form::сохранитьДанныеToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(1196, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 27);
			this->button1->TabIndex = 3;
			this->button1->Text = L"х";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &main_form::button1_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1228, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 17);
			this->label15->TabIndex = 4;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 525);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"main_form";
			this->Text = L"ИТЛ \"Солнышко\"";
			this->Load += gcnew System::EventHandler(this, &main_form::main_form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->tabPage14->ResumeLayout(false);
			this->tabPage14->PerformLayout();
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			this->tabPage16->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		void MarshalString(String^ s, wstring& os) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_TabIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void main_form_Load(System::Object^ sender, System::EventArgs^ e) {
	int i;
	{	numericUpDown1->Controls[0]->Visible = false;
	numericUpDown2->Controls[0]->Visible = false;
	numericUpDown3->Controls[0]->Visible = false;
	numericUpDown4->Controls[0]->Visible = false;
	numericUpDown5->Controls[0]->Visible = false;
	numericUpDown6->Controls[0]->Visible = false;
	numericUpDown7->Controls[0]->Visible = false;
	numericUpDown8->Controls[0]->Visible = false;
	numericUpDown9->Controls[0]->Visible = false;


	


	tabPage1->Text = listBox1->Items[0]->ToString();
	tabPage2->Text = listBox1->Items[1]->ToString();
	tabPage3->Text = listBox1->Items[2]->ToString();
	tabPage4->Text = listBox1->Items[3]->ToString();
	tabPage5->Text = listBox1->Items[4]->ToString();
	tabPage6->Text = listBox1->Items[5]->ToString();
	tabPage7->Text = listBox1->Items[6]->ToString();
	tabPage8->Text = listBox1->Items[7]->ToString();
	tabPage9->Text = listBox1->Items[8]->ToString();
	tabPage10->Text = listBox1->Items[9]->ToString();
	tabPage11->Text = listBox1->Items[10]->ToString();
	tabPage12->Text = listBox1->Items[11]->ToString();
	tabPage13->Text = listBox2->Items[0]->ToString();
	tabPage14->Text = listBox2->Items[1]->ToString();
	

	tabPage1->Parent = nullptr;
	tabPage2->Parent = nullptr;
	tabPage3->Parent = nullptr;
	tabPage4->Parent = nullptr;
	tabPage5->Parent = nullptr;
	tabPage6->Parent = nullptr;
	tabPage7->Parent = nullptr;
	tabPage8->Parent = nullptr;
	tabPage9->Parent = nullptr;
	tabPage10->Parent = nullptr;
	tabPage11->Parent = nullptr;
	tabPage12->Parent = nullptr;
	tabPage13->Parent = nullptr;
	tabPage14->Parent = nullptr;
	tabPage15->Parent = nullptr;
	tabPage16->Parent = nullptr;

	}// начальные настройки//
	{
		faith_list = &__r;
		faith_list = faith_list->LoadFromFile("D:\\Database\\religions.txt",0);


		sex_list = &__y;
		sex_list = sex_list->LoadFromFile("D:\\Database\\genders.txt",0);

		Nation_list = &__d;
		Nation_list = Nation_list->LoadFromFile("D:\\Database\\nations.txt",0);
		


		work_list = &__l;
		work_list = work_list->LoadFromFile("D:\\Database\\Works.txt",0);


		comfort_list = &__t;
		comfort_list = comfort_list->LoadFromFile("D:\\Database\\Levels.txt",0);


		sector_list = &__e;
		sector_list = sector_list->LoadFromFile("D:\\Database\\Sectors.txt",1, work_list);

		barack_list = &__g;
		barack_list = barack_list->LoadFromFile("D:\\Database\\Baracks.txt",2, comfort_list, sector_list);

		guards = &__q;
		guards = guards->LoadFromFile("D:\\Database\\Guards.txt",3, Nation_list, sex_list, faith_list);

		p_list = &__o;
		p_list = p_list->LoadFromFile("D:\\Database\\Prisoners.txt",3, Nation_list, sex_list, faith_list);

		boss = &__f;
		boss = boss->LoadFromFile("D:\\Database\\SectorBosses.txt",2, guards, sector_list);

		p_b_list = &__w;
		p_b_list = p_b_list->LoadFromFile("D:\\Database\\PrBr.txt", 2,p_list, barack_list);

		g_b_list = &__z;
		g_b_list = g_b_list->LoadFromFile("D:\\Database\\GrBr.txt", 2,guards, barack_list);


	}// выгрузка данных из файла     

	for (int i = 1; i <= p_list->len(p_list); i++)
	{

		comboBox4->Items->Add(Convert::ToString(i));
	}
	comboBox5->Items->Clear();
	for (int i = 1; i <= barack_list->len(barack_list); i++)
	{
		comboBox5->Items->Add(Convert::ToString(i));
	}
	for (int i = 1; i <= barack_list->len(barack_list); i++)
	{
		comboBox16->Items->Add(Convert::ToString(i));
	}
	for (int i = 1; i <= barack_list->len(barack_list); i++)
	{
		comboBox6->Items->Add(Convert::ToString(i));
	}
	for (int i = 1; i <= guards->len(guards); i++)
	{
		comboBox13->Items->Add(Convert::ToString(i));
	}
	for (int i = 1; i <= guards->len(guards); i++)
	{
		comboBox15->Items->Add(Convert::ToString(i));
	}
	for (int i = 1; i <= sector_list->len(sector_list); i++)
	{
		comboBox14->Items->Add(Convert::ToString(i));
	}
	for (int i = 1; i <= Nation_list->len(Nation_list); i++)
	{

		comboBox12->Items->Add(Convert::ToString(i));
	}

	for (int i = 1; i <= faith_list->len(faith_list); i++)
	{
		comboBox11->Items->Add(Convert::ToString(i));
	}

	for (int i = 1; i <= sex_list->len(sex_list); i++)
	{
		comboBox10->Items->Add(Convert::ToString(i));
	}



	for (int i = 1; i <= Nation_list->len(Nation_list); i++)
	{

		comboBox7->Items->Add(Convert::ToString(i));
	}

	for (int i = 1; i <= faith_list->len(faith_list); i++)
	{
		comboBox8->Items->Add(Convert::ToString(i));
	}

	for (int i = 1; i <= sex_list->len(sex_list); i++)
	{
		comboBox9->Items->Add(Convert::ToString(i));
	}
	System::String^ t;
	for (int i = 1; i <= work_list->len(work_list); i++)
	{
		t = gcnew System::String(work_list->search(i, work_list)->data.type.c_str());
		comboBox1->Items->Add(t);
	}

	for (int i = 1; i <= sector_list->len(sector_list); i++)
	{
		t = gcnew System::String(sector_list->search(i, sector_list)->data.Name.c_str());
		comboBox2->Items->Add(t);
	}

	for (int i = 1; i <= comfort_list->len(comfort_list); i++)
	{
		t = gcnew System::String(comfort_list->search(i, comfort_list)->data.level.c_str());
		comboBox3->Items->Add(t);
	}
	comboBox5->SelectedIndex = p_b_list->data.barrack->data.id - 1;
	comboBox4->SelectedIndex = p_b_list->data.prisoner->data.id - 1;
	comboBox6->SelectedIndex = g_b_list->data.barrack->data.id - 1;
	comboBox13->SelectedIndex = g_b_list->data.guard->data.id - 1;
	comboBox14->SelectedIndex = boss->data.sector->data.id - 1;
	comboBox15->SelectedIndex = boss->data.guard->data.id - 1;
	{
		if (Nation_list != nullptr)
		{
			textBox1->Text = gcnew System::String(Nation_list->data.nation.c_str());
		}
		if (faith_list != nullptr)
		{
			textBox2->Text = gcnew System::String(faith_list->data.religion.c_str());
		}
		if (sex_list != nullptr)
		{
			textBox3->Text = gcnew System::String(sex_list->data.gender.c_str());

		}
		if (comfort_list != nullptr)
		{
			textBox4->Text = gcnew System::String(comfort_list->data.level.c_str());
		}
		if (work_list != nullptr)
		{
			textBox5->Text = gcnew System::String(work_list->data.type.c_str());
		}
		if (sector_list != nullptr)
		{
			textBox6->Text = gcnew System::String(sector_list->data.Name.c_str());
			comboBox1->SelectedIndex = sector_list->data.Type->data.id-1;
		}
		if (barack_list != nullptr)
		{
			textBox7->Text = gcnew System::String(barack_list->data.Name.c_str());
			comboBox3->SelectedIndex = barack_list->data.Sector->data.id-1;
			comboBox2->SelectedIndex = barack_list->data.Level->data.id-1;
		}
		


		
	}





	button6->Enabled = false;
	button7->Enabled = false;
	button10->Enabled = false;
	button13->Enabled = false;
	button16->Enabled = false;
	button3->Enabled = false;
	button17->Enabled = false;
	button20->Enabled = false;

	



}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	int i;
	if (listBox1->SelectedItem != nullptr)
	{
		switch (listBox1->SelectedIndex)
		{
		case 0:
			tabPage1->Parent = tabControl1;
			tabControl1->SelectTab(tabPage1);
			
			break;
		case 1:
			tabPage2->Parent = tabControl1;
			tabControl1->SelectTab(tabPage2);
			break;
		case 2:
			tabPage3->Parent = tabControl1;
			tabControl1->SelectTab(tabPage3);
			break;
		case 3:
			tabPage4->Parent = tabControl1;
			tabControl1->SelectTab(tabPage4);
			break;
		case 4:
			tabPage5->Parent = tabControl1;
			tabControl1->SelectTab(tabPage5);
			break;
		case 5:
			tabPage6->Parent = tabControl1;
			tabControl1->SelectTab(tabPage6);
			break;
		case 6:
			tabPage7->Parent = tabControl1;
			tabControl1->SelectTab(tabPage7);
			break;
		case 7:
			tabPage8->Parent = tabControl1;
			tabControl1->SelectTab(tabPage8);
			break;
		case 8:
			tabPage9->Parent = tabControl1;
			tabControl1->SelectTab(tabPage9);
			break;
		case 9:
			tabPage10->Parent = tabControl1;
			tabControl1->SelectTab(tabPage10);
			break;
		case 10:
			tabPage11->Parent = tabControl1;
			tabControl1->SelectTab(tabPage11);
			break;
		case 11:
			tabPage12->Parent = tabControl1;
			tabControl1->SelectTab(tabPage12);
			break;
		case 12:
			tabPage15->Parent = tabControl1;
			tabControl1->SelectTab(tabPage15);
			break;
		case 13:
			tabPage16->Parent = tabControl1;
			tabControl1->SelectTab(tabPage16);
			break;
		}

		
	}
}
private: System::Void listBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	if (listBox2->SelectedItem != nullptr)
	{
		switch (listBox2->SelectedIndex)
		{
		case 0:
			tabPage13->Parent = tabControl1;
			tabControl1->SelectTab(tabPage13);
			break;

		case 1:
			tabPage14->Parent = tabControl1;
			tabControl1->SelectTab(tabPage14);
			break;
			
		
		}
		
	}
	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Convert::ToInt32(numericUpDown1->Value)!=1)
	{
		numericUpDown1->Value = Convert::ToInt32(numericUpDown1->Value) - 1;
		textBox1->Text = gcnew System::String(Nation_list->search(Convert::ToInt32(numericUpDown1->Value), Nation_list)->data.nation.c_str());
		if (Convert::ToInt32(numericUpDown1->Value) == 1)
		{
			button6->Enabled = false;
		}
	}



}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tabControl1->TabCount!=0)
	tabControl1->SelectedTab->Parent = nullptr;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 

{
	if ((Convert::ToInt32(numericUpDown2->Value) + 1) <= faith_list->len(faith_list))
	{
		numericUpDown2->Value = Convert::ToInt32(numericUpDown2->Value) + 1;
		textBox2->Text = gcnew System::String(faith_list->search(Convert::ToInt32(numericUpDown2->Value), faith_list)->data.religion.c_str());

	}
	else
	{
		numericUpDown2->Value = Convert::ToInt32(numericUpDown2->Value) + 1;
		textBox2->Text = "";
	}
	button7->Enabled = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if ((Convert::ToInt32(numericUpDown1->Value) + 1)<= Nation_list->len(Nation_list))
	{
		numericUpDown1->Value = Convert::ToInt32(numericUpDown1->Value) + 1;
		textBox1->Text = gcnew System::String(Nation_list->search(Convert::ToInt32(numericUpDown1->Value), Nation_list)->data.nation.c_str());
		
	}
	else
	{
		numericUpDown1->Value = Convert::ToInt32(numericUpDown1->Value) + 1;
		textBox1->Text = "";
	}
	button6->Enabled = true;

	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	string _temp_ = "22";

	if (textBox1->Text == "")
	{
		button5->Enabled = false;
		button6->Enabled = false;
		
	}
	else
	{
		if (Convert::ToInt32(numericUpDown1->Value) > (Nation_list->len(Nation_list)))
		{
			Nationality* object = new Nationality;
			object->data.id = Convert::ToInt32(numericUpDown1->Value);
			System::String^ text;
			text = textBox1->Text;
			MarshalString(text, _temp_);
			object->data.nation = _temp_;
	
			Nation_list->Add(Nation_list, object);
		}
		else
		{
			System::String^ text;
			text = textBox1->Text;
			MarshalString(text, _temp_);
			Nation_list->search(Convert::ToInt32(numericUpDown1->Value), Nation_list)->data.nation = _temp_;
		}
		button5->Enabled = true;
		button6->Enabled = true;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {



	if (Convert::ToInt32(numericUpDown2->Value) != 1)
	{
		numericUpDown2->Value = Convert::ToInt32(numericUpDown2->Value) - 1;
		textBox2->Text = gcnew System::String(faith_list->search(Convert::ToInt32(numericUpDown2->Value), faith_list)->data.religion.c_str());
		if (Convert::ToInt32(numericUpDown2->Value) == 1)
		{
			button7->Enabled = false;
		}
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	string _temp_ = "22";

	if (textBox2->Text == "")
	{
		button4->Enabled = false;
		button7->Enabled = false;

	}
	else
	{
		if (Convert::ToInt32(numericUpDown2->Value) > (faith_list->len(faith_list)))
		{
			Religion* object = new Religion;
			object->data.id = Convert::ToInt32(numericUpDown2->Value);
			System::String^ text;
			text = textBox2->Text;
			MarshalString(text, _temp_);
			object->data.religion = _temp_;
			
			faith_list->Add(faith_list, object);
		}
		else
		{
			System::String^ text;
			text = textBox2->Text;
			MarshalString(text, _temp_);
			faith_list->search(Convert::ToInt32(numericUpDown2->Value), faith_list)->data.religion = _temp_;
		}
		button4->Enabled = true;
		button7->Enabled = true;
	}


}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	string _temp_ = "22";

	if (textBox3->Text == "")
	{
		button9->Enabled = false;
		button10->Enabled = false;

	}
	else
	{
		if (Convert::ToInt32(numericUpDown3->Value) > (sex_list->len(sex_list)))
		{
			Gender* object = new Gender;
			object->data.id = Convert::ToInt32(numericUpDown3->Value);
			System::String^ text;
			text = textBox3->Text;
			MarshalString(text, _temp_);
			object->data.gender = _temp_;
			
			sex_list->Add(sex_list, object);
		}
		else
		{
			System::String^ text;
			text = textBox3->Text;
			MarshalString(text, _temp_);
			sex_list->search(Convert::ToInt32(numericUpDown3->Value), sex_list)->data.gender = _temp_;
		}
		button9->Enabled = true;
		button10->Enabled = true;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((Convert::ToInt32(numericUpDown3->Value) + 1) <= sex_list->len(sex_list))
	{
		numericUpDown3->Value = Convert::ToInt32(numericUpDown3->Value) + 1;
		textBox3->Text = gcnew System::String(sex_list->search(Convert::ToInt32(numericUpDown3->Value), sex_list)->data.gender.c_str());

	}
	else
	{
		numericUpDown3->Value = Convert::ToInt32(numericUpDown3->Value) + 1;
		textBox3->Text = "";
	}
	button10->Enabled = true;

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Convert::ToInt32(numericUpDown3->Value) != 1)
	{
		numericUpDown3->Value = Convert::ToInt32(numericUpDown3->Value) - 1;
		textBox3->Text = gcnew System::String(sex_list->search(Convert::ToInt32(numericUpDown3->Value), sex_list)->data.gender.c_str());
		if (Convert::ToInt32(numericUpDown3->Value) == 1)
		{
			button10->Enabled = false;
		}
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((Convert::ToInt32(numericUpDown4->Value) + 1) <= comfort_list->len(comfort_list))
	{
		numericUpDown4->Value = Convert::ToInt32(numericUpDown4->Value) + 1;
		textBox4->Text = gcnew System::String(comfort_list->search(Convert::ToInt32(numericUpDown4->Value), comfort_list)->data.level.c_str());

	}
	else
	{
		numericUpDown4->Value = Convert::ToInt32(numericUpDown4->Value) + 1;
		textBox4->Text = "";
	}
	button13->Enabled = true;



}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {


	if (Convert::ToInt32(numericUpDown4->Value) != 1)
	{
		numericUpDown4->Value = Convert::ToInt32(numericUpDown4->Value) - 1;
		textBox4->Text = gcnew System::String(comfort_list->search(Convert::ToInt32(numericUpDown4->Value), comfort_list)->data.level.c_str());
		if (Convert::ToInt32(numericUpDown4->Value) == 1)
		{
			button13->Enabled = false;
		}
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	string _temp_ = "22";

	if (textBox4->Text == "")
	{
		button13->Enabled = false;
		button12->Enabled = false;

	}
	else
	{
		if (Convert::ToInt32(numericUpDown4->Value) > (comfort_list->len(comfort_list)))
		{
			ComfortLevel* object = new ComfortLevel;
			object->data.id = Convert::ToInt32(numericUpDown4->Value);
			System::String^ text;
			text = textBox4->Text;
			MarshalString(text, _temp_);
			object->data.level = _temp_;
		
			comfort_list->Add(comfort_list, object);
		}
		else
		{
			System::String^ text;
			text = textBox4->Text;
			MarshalString(text, _temp_);
			comfort_list->search(Convert::ToInt32(numericUpDown4->Value), comfort_list)->data.level = _temp_;
		}
		button12->Enabled = true;
		button13->Enabled = true;
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {


	if ((Convert::ToInt32(numericUpDown5->Value) + 1) <= work_list->len(work_list))
	{
		numericUpDown5->Value = Convert::ToInt32(numericUpDown5->Value) + 1;
		textBox5->Text = gcnew System::String(work_list->search(Convert::ToInt32(numericUpDown5->Value), work_list)->data.type.c_str());

	}
	else
	{
		numericUpDown5->Value = Convert::ToInt32(numericUpDown5->Value) + 1;
		textBox5->Text = "";
	}
	button16->Enabled = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Convert::ToInt32(numericUpDown5->Value) != 1)
	{
		numericUpDown5->Value = Convert::ToInt32(numericUpDown5->Value) - 1;
		textBox5->Text = gcnew System::String(work_list->search(Convert::ToInt32(numericUpDown5->Value), work_list)->data.type.c_str());
		if (Convert::ToInt32(numericUpDown5->Value) == 1)
		{
			button16->Enabled = false;
		}
	}


}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	string _temp_ = "22";

	if (textBox5->Text == "")
	{
		button16->Enabled = false;
		button15->Enabled = false;

	}
	else
	{
		if (Convert::ToInt32(numericUpDown5->Value) > (work_list->len(work_list)))
		{
			WorkType* object = new WorkType;
			object->data.id = Convert::ToInt32(numericUpDown5->Value);
			System::String^ text;
			text = textBox5->Text;
			MarshalString(text, _temp_);
			object->data.type = _temp_;
			
			work_list->Add(work_list, object);
		}
		else
		{
			System::String^ text;
			text = textBox5->Text;
			MarshalString(text, _temp_);
			work_list->search(Convert::ToInt32(numericUpDown5->Value), work_list)->data.type = _temp_;
		}
		button15->Enabled = true;
		button16->Enabled = true;
	}



}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void tabControl1_Selected(System::Object^ sender, System::Windows::Forms::TabControlEventArgs^ e) {
	if (tabControl1->SelectedTab == tabPage8)
	{
		System::String^ t;
		comboBox1->Items->Clear();
		for (int i = 1; i <= work_list->len(work_list); i++)
		{
			t = gcnew System::String(work_list->search(i, work_list)->data.type.c_str());
			comboBox1->Items->Add(t);
		}
		

	//	comboBox1->SelectedIndex = sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Type->data.id-1;
	}

	if (tabControl1->SelectedTab == tabPage9)
	{
		comboBox2->Items->Clear();
		System::String^ t;
		for (int i = 1; i <= sector_list->len(sector_list); i++)
		{
			t = gcnew System::String(sector_list->search(i, sector_list)->data.Name.c_str());
			comboBox2->Items->Add(t);
		}
		//comboBox2->SelectedIndex = barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Sector->data.id-1;
		comboBox3->Items->Clear();
		for (int i = 1; i <= comfort_list->len(comfort_list); i++)
		{
			t = gcnew System::String(comfort_list->search(i, comfort_list)->data.level.c_str());
			comboBox3->Items->Add(t);
		}
		//comboBox3->SelectedIndex = barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Level->data.id-1;

		if (tabControl1->SelectedTab == tabPage7)
		{
			System::String^ t;
			comboBox4->Items->Clear();
			for (int i = 1; i <= p_list->len(p_list); i++)
			{

				comboBox4->Items->Add(Convert::ToString(i));
			}
			comboBox5->Items->Clear();
			for (int i = 1; i <= barack_list->len(barack_list); i++)
			{
				comboBox5->Items->Add(Convert::ToString(i));
			}

			//	comboBox1->SelectedIndex = sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Type->data.id-1;
		}


	}

	


}
private: System::Void tabPage8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((Convert::ToInt32(numericUpDown6->Value) + 1) <= sector_list->len(sector_list))
	{
		numericUpDown6->Value = Convert::ToInt32(numericUpDown6->Value) + 1;
		textBox6->Text = gcnew System::String(sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Name.c_str());
		comboBox1->SelectedIndex = sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Type->data.id-1;
	}
	else
	{
		if(Convert::ToInt32(numericUpDown6->Value)== sector_list->len(sector_list))
		{
			numericUpDown6->Value = Convert::ToInt32(numericUpDown6->Value) + 1;
			textBox6->Text = "Cектор" + Convert::ToString(numericUpDown6->Value);
			comboBox1->SelectedIndex = 0;
		//	checkBox1->Checked = false;
		}
	
	}
	button3->Enabled = true;


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Convert::ToInt32(numericUpDown6->Value) != 1)
	{
		numericUpDown6->Value = Convert::ToInt32(numericUpDown6->Value) - 1;
		textBox6->Text = gcnew System::String(sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Name.c_str());
		comboBox1->SelectedIndex = sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Type->data.id-1;
		if (Convert::ToInt32(numericUpDown6->Value) == 1)
		{
			button3->Enabled = false;
		}
	}

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	string _temp_ = "22";

	if (Convert::ToInt32(numericUpDown6->Value) > (sector_list->len(sector_list)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		Sector* object = new Sector;
		object->data.id = Convert::ToInt32(numericUpDown6->Value);
		System::String^ text;
		text = textBox6->Text;
		MarshalString(text, _temp_);
		object->data.Name = _temp_;
		object->data.Type = work_list->search(Convert::ToInt32(comboBox1->SelectedIndex) + 1, work_list);
		sector_list->Add(sector_list, object);
		label15->Text = gcnew System::String(sector_list->toStringAll().c_str());
		
	//	if (numericUpDown6->Value == sector_list->len(sector_list) + 1)
		//{
			//checkBox1->Checked = true;
		//}
	}
	else
	{
		System::String^ text;
		text = textBox6->Text;
		MarshalString(text, _temp_);
		sector_list->search(Convert::ToInt32(numericUpDown6->Value), sector_list)->data.Name = _temp_;
		sector_list->data.Type = work_list->search(Convert::ToInt32(comboBox1->SelectedIndex) + 1, work_list);
	}


}
private: System::Void numericUpDown7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {



	if ((Convert::ToInt32(numericUpDown7->Value) + 1) <= barack_list->len(barack_list))
	{
		numericUpDown7->Value = Convert::ToInt32(numericUpDown7->Value) + 1;
		textBox7->Text = gcnew System::String(barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Name.c_str());
		comboBox3->SelectedIndex = barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Level->data.id - 1;
		comboBox2->SelectedIndex = barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Sector->data.id - 1;
	}
	else
	{
		if (Convert::ToInt32(numericUpDown7->Value) == barack_list->len(barack_list))
		{
			numericUpDown7->Value = Convert::ToInt32(numericUpDown7->Value) + 1;
			textBox7->Text = "Барак" + Convert::ToString(numericUpDown7->Value);
			comboBox2->SelectedIndex = 0;
			comboBox3->SelectedIndex = 0;
			//	checkBox1->Checked = false;
		}

	}
	button17->Enabled = true;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {


	if (Convert::ToInt32(numericUpDown7->Value) != 1)
	{
		numericUpDown7->Value = Convert::ToInt32(numericUpDown7->Value) - 1;
		textBox7->Text = gcnew System::String(barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Name.c_str());
		comboBox3->SelectedIndex = barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Level->data.id - 1;
		comboBox2->SelectedIndex = barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Sector->data.id - 1;
		if (Convert::ToInt32(numericUpDown7->Value) == 1)
		{
			button17->Enabled = false;
		}
	}
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	string _temp_ = "22";

	if (Convert::ToInt32(numericUpDown7->Value) > (barack_list->len(barack_list)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		Barrack* object = new Barrack;
		object->data.id = Convert::ToInt32(numericUpDown7->Value);
		System::String^ text;
		text = textBox7->Text;
		MarshalString(text, _temp_);
		object->data.Name = _temp_;
		object->data.Level = comfort_list->search(Convert::ToInt32(comboBox3->SelectedIndex) + 1, comfort_list);
		object->data.Sector= sector_list->search(Convert::ToInt32(comboBox2->SelectedIndex) + 1, sector_list);
		barack_list->Add(barack_list, object);
		//label15->Text = gcnew System::String(sector_list->toStringAll().c_str());

		//	if (numericUpDown6->Value == sector_list->len(sector_list) + 1)
			//{
				//checkBox1->Checked = true;
			//}
	}
	else
	{
		System::String^ text;
		text = textBox7->Text;
		MarshalString(text, _temp_);
		barack_list->search(Convert::ToInt32(numericUpDown7->Value), barack_list)->data.Name = _temp_;
		barack_list->data.Level = comfort_list->search(Convert::ToInt32(comboBox3->SelectedIndex) + 1, comfort_list);
		barack_list->data.Sector = sector_list->search(Convert::ToInt32(comboBox2->SelectedIndex) + 1, sector_list);
	}
}


private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((Convert::ToInt32(numericUpDown8->Value) + 1) <= p_list->len(p_list))
	{
		numericUpDown8->Value = Convert::ToInt32(numericUpDown8->Value) + 1;
		
		textBox19->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Surname.c_str());
		textBox18->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Name.c_str());
		textBox17->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Patronymic.c_str());
		textBox16->Text =Convert::ToString(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.passSerialNumber);
		textBox15->Text = Convert::ToString(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.passNumber);
		comboBox7->SelectedIndex = p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Nation->data.id - 1;;
		comboBox8->SelectedIndex = p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Faith->data.id - 1;;
		comboBox9->SelectedIndex = p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Sex->data.id - 1;;
		textBox20->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Registration.c_str());
		textBox31->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthplace.c_str());
		textBox21->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.PeriodOfImprisonment.c_str());
		textBox22->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.LawArticle.c_str());
		//dateTimePicker1->Value.Parse(gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthdate.c_str()));
		//dateTimePicker2->Value.Parse(gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentStart.c_str()));
		//dateTimePicker3->Value.Parse(gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentEnd.c_str()));
		
		DateTime parsedDate;

		System::String^ sk;
		sk= gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthdate.c_str());
		parsedDate = parsedDate.Parse(sk);
	
		dateTimePicker1->Value = parsedDate;
		sk = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentStart.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker2->Value = parsedDate;
		sk = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentEnd.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker2->Value = parsedDate;
	}
	else
	{
		if (Convert::ToInt32(numericUpDown8->Value) == p_list->len(p_list))
		{
			numericUpDown8->Value = Convert::ToInt32(numericUpDown8->Value) + 1;
			textBox19->Text = "Фамилия" + Convert::ToString(numericUpDown8->Value);
			textBox18->Text = "Имя" + Convert::ToString(numericUpDown8->Value);
			textBox17->Text = "Отчество" + Convert::ToString(numericUpDown8->Value);
			textBox16->Text = "100" + Convert::ToString(numericUpDown8->Value);
			textBox15->Text = "99999" + Convert::ToString(numericUpDown8->Value);
			comboBox7->SelectedIndex = 0;
			comboBox8->SelectedIndex = 0;
			comboBox9->SelectedIndex = 0;
			textBox20->Text = "Город" + Convert::ToString(numericUpDown8->Value);
			textBox31->Text = "Село" + Convert::ToString(numericUpDown8->Value);
			textBox21->Text = "Срок:" + Convert::ToString(numericUpDown8->Value);
			textBox22->Text = "Статья:" + Convert::ToString(numericUpDown8->Value);
			dateTimePicker1->Value = dateTimePicker1->MaxDate;
			dateTimePicker2->Value = dateTimePicker2->MaxDate;
			dateTimePicker3->Value = dateTimePicker3->MaxDate;
		}

	}
	button24->Enabled = true;



}
private: System::Void comboBox9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {


	if (Convert::ToInt32(numericUpDown8->Value) != 1)
	{
		numericUpDown8->Value = Convert::ToInt32(numericUpDown8->Value) - 1;
		textBox19->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Surname.c_str());
		textBox18->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Name.c_str());
		textBox17->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Patronymic.c_str());
		textBox16->Text = Convert::ToString(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.passSerialNumber);
		textBox15->Text = Convert::ToString(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.passNumber);
		comboBox7->SelectedIndex = p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Nation->data.id - 1;;
		comboBox8->SelectedIndex = p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Faith->data.id - 1;;
		comboBox9->SelectedIndex = p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Sex->data.id - 1;;
		textBox20->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Registration.c_str());
		textBox31->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthplace.c_str());
		textBox21->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.PeriodOfImprisonment.c_str());
		textBox22->Text = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.LawArticle.c_str());
		DateTime parsedDate;

		System::String^ sk;
		sk = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthdate.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker1->Value = parsedDate;
		sk = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentStart.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker2->Value = parsedDate;
		sk = gcnew System::String(p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentEnd.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker2->Value = parsedDate;
		if (Convert::ToInt32(numericUpDown8->Value) == 1)
		{
			button24->Enabled = false;
		}
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {


	string _temp_ = "22";

	if (Convert::ToInt32(numericUpDown8->Value) > (p_list->len(p_list)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		Prisoner* object = new Prisoner;
		object->data.id = Convert::ToInt32(numericUpDown8->Value);
		System::String^ text;
		text = textBox19->Text;
		MarshalString(text, _temp_);
		object->data.Surname = _temp_;

		text = textBox18->Text;
		MarshalString(text, _temp_);
		object->data.Name = _temp_;

		text = textBox17->Text;
		MarshalString(text, _temp_);
		object->data.Patronymic = _temp_;

		
		object->data.passSerialNumber = Convert::ToInt32(textBox16->Text);
		object->data.passNumber = Convert::ToInt32(textBox15->Text);

		text = textBox20->Text;
		MarshalString(text, _temp_);
		object->data.Registration = _temp_;

		text = textBox31->Text;
		MarshalString(text, _temp_);
		object->data.Birthplace = _temp_;

		text = textBox21->Text;
		MarshalString(text, _temp_);
		object->data.PeriodOfImprisonment = _temp_;

		text = textBox22->Text;
		MarshalString(text, _temp_);
		object->data.LawArticle = _temp_;
		object->data.Nation = Nation_list->search(Convert::ToInt32(comboBox7->SelectedIndex) + 1, Nation_list);
		object->data.Faith = faith_list->search(Convert::ToInt32(comboBox8->SelectedIndex) + 1, faith_list);
		object->data.Sex = sex_list->search(Convert::ToInt32(comboBox9->SelectedIndex) + 1, sex_list);

		text = dateTimePicker1->Value.ToShortDateString();
		MarshalString(text, _temp_);
		object->data.Birthdate = _temp_;
		
		text = dateTimePicker2->Value.ToShortDateString();
		MarshalString(text, _temp_);
		object->data.ImprisonmentStart = _temp_;

		text = dateTimePicker3->Value.ToShortDateString();
		MarshalString(text, _temp_);
		object->data.ImprisonmentEnd = _temp_;
	

		


		p_list->Add(p_list, object);
		label15->Text = gcnew System::String(p_list->toStringAll().c_str());

	}
	else
	{
		



		System::String^ text;
		text = textBox19->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Surname = _temp_;

		text = textBox18->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Name = _temp_;

		text = textBox17->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Patronymic = _temp_;


		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.passSerialNumber = Convert::ToInt32(textBox16->Text);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.passNumber = Convert::ToInt32(textBox15->Text);

		text = textBox20->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Registration = _temp_;

		text = textBox31->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthplace = _temp_;

		text = textBox21->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.PeriodOfImprisonment = _temp_;

		text = textBox22->Text;
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.LawArticle = _temp_;
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Nation = Nation_list->search(Convert::ToInt32(comboBox7->SelectedIndex) + 1, Nation_list);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Faith = faith_list->search(Convert::ToInt32(comboBox8->SelectedIndex) + 1, faith_list);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Sex = sex_list->search(Convert::ToInt32(comboBox9->SelectedIndex) + 1, sex_list);

		text = dateTimePicker1->Value.ToShortDateString();
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.Birthdate = _temp_;

		text = dateTimePicker2->Value.ToShortDateString();
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentStart = _temp_;

		text = dateTimePicker3->Value.ToShortDateString();
		MarshalString(text, _temp_);
		p_list->search(Convert::ToInt32(numericUpDown8->Value), p_list)->data.ImprisonmentEnd = _temp_;




	}


}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((Convert::ToInt32(numericUpDown9->Value) + 1) <= guards->len(guards))
	{
		numericUpDown9->Value = Convert::ToInt32(numericUpDown9->Value) + 1;

		textBox30->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Surname.c_str());
		textBox29->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Name.c_str());
		textBox28->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Patronymic.c_str());

		textBox27->Text = Convert::ToString(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.passSerialNumber);
		textBox26->Text = Convert::ToString(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.passNumber);
		comboBox12->SelectedIndex = guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Nation->data.id - 1;;
		comboBox11->SelectedIndex = guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Faith->data.id - 1;;
		comboBox10->SelectedIndex = guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Sex->data.id - 1;;
		textBox25->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Registration.c_str());
		textBox24->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Rank.c_str());
		DateTime parsedDate;

		System::String^ sk;
		sk = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Birthdate.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker6->Value = parsedDate;
	}
	else
	{
		if (Convert::ToInt32(numericUpDown9->Value) == guards->len(guards))
		{
			numericUpDown9->Value = Convert::ToInt32(numericUpDown9->Value) + 1;
			textBox30->Text = "Фамилия" + Convert::ToString(numericUpDown9->Value);
			textBox29->Text = "Имя" + Convert::ToString(numericUpDown9->Value);
			textBox28->Text = "Отчество" + Convert::ToString(numericUpDown9->Value);
			textBox27->Text = "100" + Convert::ToString(numericUpDown9->Value);
			textBox26->Text = "99999" + Convert::ToString(numericUpDown9->Value);
			textBox25->Text = "г. Москва";
			textBox24->Text = "Рядовой №" + Convert::ToString(numericUpDown9->Value);
			comboBox12->SelectedIndex = 0;
			comboBox11->SelectedIndex = 0;
			comboBox10->SelectedIndex = 0;
		}

	}
	button27->Enabled = true;



}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {


	if (Convert::ToInt32(numericUpDown9->Value) != 1)
	{
		numericUpDown9->Value = Convert::ToInt32(numericUpDown9->Value) - 1;
		textBox30->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Surname.c_str());
		textBox29->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Name.c_str());
		textBox28->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Patronymic.c_str());

		textBox27->Text = Convert::ToString(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.passSerialNumber);
		textBox26->Text = Convert::ToString(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.passNumber);
		comboBox12->SelectedIndex = guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Nation->data.id - 1;;
		comboBox11->SelectedIndex = guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Faith->data.id - 1;;
		comboBox10->SelectedIndex = guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Sex->data.id - 1;;
		textBox25->Text = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Registration.c_str());
		
		DateTime parsedDate;

		System::String^ sk;
		sk = gcnew System::String(guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Birthdate.c_str());
		parsedDate = parsedDate.Parse(sk);

		dateTimePicker6->Value = parsedDate;
		
		if (Convert::ToInt32(numericUpDown9->Value) == 1)
		{
			button27->Enabled = false;
		}
	}


}
private: System::Void textBox30_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox28_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {


	string _temp_ = "22";

	if (Convert::ToInt32(numericUpDown9->Value) > (guards->len(guards)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		Guard* object = new Guard;
		object->data.id = Convert::ToInt32(numericUpDown9->Value);
		System::String^ text;
		text = textBox30->Text;
		MarshalString(text, _temp_);
		object->data.Surname = _temp_;

		text = textBox29->Text;
		MarshalString(text, _temp_);
		object->data.Name = _temp_;

		text = textBox28->Text;
		MarshalString(text, _temp_);
		object->data.Patronymic = _temp_;


		object->data.passSerialNumber = Convert::ToInt32(textBox27->Text);
		object->data.passNumber = Convert::ToInt32(textBox26->Text);

		text = textBox25->Text;
		MarshalString(text, _temp_);
		object->data.Registration = _temp_;

		text = textBox24->Text;
		MarshalString(text, _temp_);
		object->data.Rank = _temp_;


		object->data.Nation = Nation_list->search(Convert::ToInt32(comboBox12->SelectedIndex) + 1, Nation_list);
		object->data.Faith = faith_list->search(Convert::ToInt32(comboBox11->SelectedIndex) + 1, faith_list);
		object->data.Sex = sex_list->search(Convert::ToInt32(comboBox10->SelectedIndex) + 1, sex_list);

		text = dateTimePicker6->Value.ToShortDateString();
		MarshalString(text, _temp_);
		object->data.Birthdate = _temp_;


		guards->Add(guards, object);
		label15->Text = gcnew System::String(guards->toStringAll().c_str());

	}
	else
	{

		System::String^ text;
		text = textBox30->Text;
		MarshalString(text, _temp_);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Surname = _temp_;

		text = textBox29->Text;
		MarshalString(text, _temp_);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Name = _temp_;

		text = textBox28->Text;
		MarshalString(text, _temp_);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Patronymic = _temp_;


		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.passSerialNumber = Convert::ToInt32(textBox27->Text);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.passNumber = Convert::ToInt32(textBox26->Text);

		text = textBox25->Text;
		MarshalString(text, _temp_);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Registration = _temp_;

		text = textBox24->Text;
		MarshalString(text, _temp_);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Rank = _temp_;

		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Nation = Nation_list->search(Convert::ToInt32(comboBox7->SelectedIndex) + 1, Nation_list);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Faith = faith_list->search(Convert::ToInt32(comboBox9->SelectedIndex) + 1, faith_list);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Sex = sex_list->search(Convert::ToInt32(comboBox9->SelectedIndex) + 1, sex_list);

		text = dateTimePicker6->Value.ToShortDateString();
		MarshalString(text, _temp_);
		guards->search(Convert::ToInt32(numericUpDown9->Value), guards)->data.Birthdate = _temp_;



	}

}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



	textBox13->Text = gcnew System::String(barack_list->search(Convert::ToInt32(comboBox5->SelectedIndex)+1, barack_list)->data.Name.c_str());
	textBox14->Text = gcnew System::String(barack_list->search(Convert::ToInt32(comboBox5->SelectedIndex) + 1, barack_list)->data.Level->data.level.c_str());

}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {




	textBox8->Text = gcnew System::String(p_list->search(Convert::ToInt32(comboBox4->SelectedIndex) + 1, p_list)->data.Surname.c_str());
	textBox9->Text = gcnew System::String(p_list->search(Convert::ToInt32(comboBox4->SelectedIndex) + 1, p_list)->data.Name.c_str());
	textBox10->Text = gcnew System::String(p_list->search(Convert::ToInt32(comboBox4->SelectedIndex) + 1, p_list)->data.Patronymic.c_str());
	textBox11->Text = gcnew System::String(p_list->search(Convert::ToInt32(comboBox4->SelectedIndex) + 1, p_list)->data.LawArticle.c_str());

}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {


	if ((comboBox4->SelectedIndex != -1)&&(comboBox5->SelectedIndex != -1))
	{
		if (Convert::ToInt32(numericUpDown10->Value) + 1 <= p_b_list->len(p_b_list))
		{
			PrisonerBarrack* temp = new PrisonerBarrack;
			temp = p_b_list;
			numericUpDown10->Value = Convert::ToInt32(numericUpDown10->Value) + 1;
			for (int i = 1; i < numericUpDown10->Value; i++)
			{
				temp = temp->next;
			}
			comboBox5->SelectedIndex = temp->data.barrack->data.id - 1;
			comboBox4->SelectedIndex = temp->data.prisoner->data.id - 1;
		}
		else
		{
			comboBox5->SelectedIndex = 0;
			comboBox4->SelectedIndex = 0;
		}
		button20->Enabled = true;
	}

}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((comboBox4->SelectedIndex != -1) && (comboBox5->SelectedIndex != -1))
	{
		if (Convert::ToInt32(numericUpDown10->Value) != 1)
		{
			PrisonerBarrack* temp = new PrisonerBarrack;
			temp = p_b_list;
			numericUpDown10->Value = Convert::ToInt32(numericUpDown10->Value) - 1;
			for (int i = 1; i < numericUpDown10->Value; i++)
			{
				temp = temp->next;
			}
			comboBox5->SelectedIndex = temp->data.barrack->data.id - 1;
			comboBox4->SelectedIndex = temp->data.prisoner->data.id - 1;
			if (Convert::ToInt32(numericUpDown10->Value) == 1)
			{
				button20->Enabled = false;
			}
		}



	}



}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {


	string _temp_ = "22";

	if (Convert::ToInt32(numericUpDown10->Value)+1 > (p_b_list->len(p_b_list)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		PrisonerBarrack* object = new PrisonerBarrack;
		object->data.barrack = barack_list->search(Convert::ToInt32(comboBox5->SelectedIndex) + 1, barack_list);
		object->data.prisoner = p_list->search(Convert::ToInt32(comboBox4->SelectedIndex) + 1, p_list);
		object->data.id = Convert::ToInt32(numericUpDown10->Value)+1;
		p_b_list->Add(p_b_list, object);
		label15->Text = gcnew System::String(p_b_list->toStringAll().c_str());

	}
	else
	{

		p_b_list->search(Convert::ToInt32(numericUpDown10->Value), p_b_list)->data.barrack = barack_list->search(Convert::ToInt32(comboBox5->SelectedIndex) + 1, barack_list);
		p_b_list->search(Convert::ToInt32(numericUpDown10->Value), p_b_list)->data.prisoner = p_list->search(Convert::ToInt32(comboBox4->SelectedIndex) + 1, p_list);

		label15->Text = gcnew System::String(p_b_list->toStringAll().c_str());

	}






}
private: System::Void tabPage12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {




	if ((comboBox6->SelectedIndex != -1) && (comboBox13->SelectedIndex != -1))
	{
		if (Convert::ToInt32(numericUpDown11->Value) + 1 <= g_b_list->len(g_b_list))
		{
			GuardWorkplace* temp = new GuardWorkplace;
			temp = g_b_list;
			numericUpDown11->Value = Convert::ToInt32(numericUpDown11->Value) + 1;
			for (int i = 1; i < numericUpDown11->Value; i++)
			{
				temp = temp->next;
			}
			comboBox6->SelectedIndex = temp->data.barrack->data.id - 1;
			comboBox13->SelectedIndex = temp->data.guard->data.id - 1;
			checkBox1->Checked = temp->data.isBoss;
		}
		else
		{
			comboBox6->SelectedIndex = 0;
			comboBox13->SelectedIndex = 0;
			checkBox1->Checked = false;
		}
		button29->Enabled = true;
	}
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((comboBox6->SelectedIndex != -1) && (comboBox13->SelectedIndex != -1))
	{
		if (Convert::ToInt32(numericUpDown11->Value) != 1)
		{
			GuardWorkplace* temp = new GuardWorkplace;
			temp = g_b_list;
			numericUpDown11->Value = Convert::ToInt32(numericUpDown11->Value) - 1;
			for (int i = 1; i < numericUpDown11->Value; i++)
			{
				temp = temp->next;
			}
			comboBox6->SelectedIndex = temp->data.barrack->data.id - 1;
			comboBox13->SelectedIndex = temp->data.guard->data.id - 1;
			checkBox1->Checked = temp->data.isBoss;
			if (Convert::ToInt32(numericUpDown11->Value) == 1)
			{
				button29->Enabled = false;
			}
		}



	}

}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox12->Text = gcnew System::String(barack_list->search(Convert::ToInt32(comboBox6->SelectedIndex) + 1, barack_list)->data.Name.c_str());
	textBox23->Text = gcnew System::String(barack_list->search(Convert::ToInt32(comboBox6->SelectedIndex) + 1, barack_list)->data.Level->data.level.c_str());

}



private: System::Void comboBox13_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox35->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox13->SelectedIndex) + 1, guards)->data.Surname.c_str());
	textBox34->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox13->SelectedIndex) + 1, guards)->data.Name.c_str());
	textBox33->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox13->SelectedIndex) + 1, guards)->data.Patronymic.c_str());
	textBox32->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox13->SelectedIndex) + 1, guards)->data.Rank.c_str());
}
private: System::Void button23_Click_1(System::Object^ sender, System::EventArgs^ e) {


	string _temp_ = "22";

	if (Convert::ToInt32(numericUpDown11->Value) + 1 > (g_b_list->len(g_b_list)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		GuardWorkplace* object = new GuardWorkplace;
		object->data.barrack = barack_list->search(Convert::ToInt32(comboBox6->SelectedIndex) + 1, barack_list);
		object->data.guard =guards->search(Convert::ToInt32(comboBox13->SelectedIndex) + 1, guards);
		object->data.id = Convert::ToInt32(numericUpDown11->Value) + 1;
		object->data.isBoss = checkBox1->Checked;
		g_b_list->Add(g_b_list, object);
		label15->Text = gcnew System::String(g_b_list->toStringAll().c_str());

	}
	else
	{

		g_b_list->search(Convert::ToInt32(numericUpDown11->Value), g_b_list)->data.barrack = barack_list->search(Convert::ToInt32(comboBox6->SelectedIndex) + 1, barack_list);
		g_b_list->search(Convert::ToInt32(numericUpDown11->Value), g_b_list)->data.guard = guards->search(Convert::ToInt32(comboBox13->SelectedIndex) + 1, guards);
		checkBox1->Checked = g_b_list->search(Convert::ToInt32(numericUpDown11->Value), g_b_list)->data.isBoss;
		label15->Text = gcnew System::String(g_b_list->toStringAll().c_str());

	}



}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {


	if ((comboBox14->SelectedIndex != -1) && (comboBox15->SelectedIndex != -1))
	{
		if (Convert::ToInt32(numericUpDown12->Value) + 1 <= boss->len(boss))
		{
			BossOfSector* temp = new BossOfSector;
			temp = boss;
			numericUpDown12->Value = Convert::ToInt32(numericUpDown12->Value) + 1;
			for (int i = 1; i < numericUpDown12->Value; i++)
			{
				temp = temp->next;
			}
			comboBox14->SelectedIndex = temp->data.sector->data.id - 1;
			comboBox15->SelectedIndex = temp->data.guard->data.id - 1;
			
		}
		else
		{
			comboBox14->SelectedIndex = 0;
			comboBox15->SelectedIndex = 0;
		
		}
		button32->Enabled = true;
	}



}
private: System::Void comboBox14_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox36->Text = gcnew System::String(sector_list->search(Convert::ToInt32(comboBox14->SelectedIndex) + 1, sector_list)->data.Name.c_str());
	textBox37->Text = gcnew System::String(sector_list->search(Convert::ToInt32(comboBox14->SelectedIndex) + 1, sector_list)->data.Type->data.type.c_str());
}
private: System::Void comboBox15_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	textBox41->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox15->SelectedIndex) + 1, guards)->data.Surname.c_str());
	textBox40->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox15->SelectedIndex) + 1, guards)->data.Name.c_str());
	textBox39->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox15->SelectedIndex) + 1, guards)->data.Patronymic.c_str());
	textBox38->Text = gcnew System::String(guards->search(Convert::ToInt32(comboBox15->SelectedIndex) + 1, guards)->data.Rank.c_str());


}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {






	if (Convert::ToInt32(numericUpDown12->Value) + 1 > (boss->len(boss)))
	{
		//if(Convert::ToInt32(numericUpDown6->Value) )
		BossOfSector* object = new BossOfSector;
		object->data.sector= sector_list->search(Convert::ToInt32(comboBox14->SelectedIndex) + 1,sector_list);
		object->data.guard = guards->search(Convert::ToInt32(comboBox15->SelectedIndex) + 1, guards);
		object->data.id = Convert::ToInt32(numericUpDown12->Value) + 1;

		boss->Add(boss, object);
		label15->Text = gcnew System::String(boss->toStringAll().c_str());

	}
	else
	{

		boss->search(Convert::ToInt32(numericUpDown12->Value), boss)->data.sector = sector_list->search(Convert::ToInt32(comboBox14->SelectedIndex) + 1, sector_list);
		boss->search(Convert::ToInt32(numericUpDown12->Value), boss)->data.guard = guards->search(Convert::ToInt32(comboBox15->SelectedIndex) + 1, guards);
	
		label15->Text = gcnew System::String(boss->toStringAll().c_str());

	}
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((comboBox14->SelectedIndex != -1) && (comboBox15->SelectedIndex != -1))
	{
		if (Convert::ToInt32(numericUpDown12->Value) != 1)
		{
			BossOfSector* temp = new BossOfSector;
			temp = boss;
			numericUpDown12->Value = Convert::ToInt32(numericUpDown12->Value) - 1;
			for (int i = 1; i < numericUpDown12->Value; i++)
			{
				temp = temp->next;
			}
			comboBox14->SelectedIndex = temp->data.sector->data.id - 1;
			comboBox15->SelectedIndex = temp->data.guard->data.id - 1;

			if (Convert::ToInt32(numericUpDown12->Value) == 1)
			{
				button32->Enabled = false;
			}
		}



	}

}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {

	Guard* rank_order = new Guard;
	Guard* temp = new Guard;
	string text;
	ofstream out;

	string res;
	  res = "---------------------------------------------------------------------------------Отчет-----------------------------------------------------------\n";
//res = res + "|     id|        фамилия|        имя|    отчество|        звание|        место регистрации|    номер паспорта|    серия паспорта|  дата рождения|\n";
	  out.open("D:\\text1.txt");
	  out << res;

	MarshalString(textBox42->Text, text);
	temp = guards;

	for (int i = 1; i < guards->len(guards); i++)
	{
		char* cstr = &text[0];
		char* cstr1 = &temp->data.Rank[0];
		if (temp->data.Rank.find(text)<temp->data.Rank.length())
		{
			
	//		test = format("|%7d|%15s|%11s|%12s|%14s|%25s|%18d|%18d|%15s|\n", temp->data.id, temp->data.Surname.c_str(), temp->data.Name.c_str(), temp->data.Patronymic.c_str(), temp->data.Rank.c_str(), temp->data.Registration.c_str(), temp->data.passNumber, temp->data.passSerialNumber, temp->data.Birthdate.c_str());
		//	fprintf(file, test);
		//	fprintf(file,);
			out << temp->data.id << "|" << temp->data.Surname << "|" << temp->data.Name << "|" << temp->data.Patronymic << "|" << temp->data.Registration << "|" << temp->data.passNumber << "|" << temp->data.passSerialNumber<< "|" << temp->data.Birthdate << "|"<<"\n";
		}
		temp = temp->next;
	}

}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {



	PrisonerBarrack* rank_order = new PrisonerBarrack;
	PrisonerBarrack* temp;
	ofstream out;
	int number;
	string res;
	res = "---------------------------------------------------------------------------------Отчет-----------------------------------------------------------\n";
	
	out.open("D:\\text2.txt");
	out << res;
	number = Convert::ToInt32(comboBox16->SelectedIndex)+1;

	temp = p_b_list;

	for (int i = 1; i < p_b_list->len(p_b_list); i++)
	{

		if (number == temp->data.barrack->data.id)
		{

			out << temp->data.barrack->data.Name << "|" << temp->data.prisoner->data.Surname << "|" << temp->data.prisoner->data.Name << "|" << temp->data.prisoner->data.Patronymic << "|" << temp->data.prisoner->data.Registration << "|" << temp->data.prisoner->data.passNumber << "|" << temp->data.prisoner->data.passSerialNumber << "|" << temp->data.prisoner->data.Birthdate << "|" << "\n";
		}
		temp = temp->next;
	}



}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Y_TABPAGE15 = sector_list->LoadToForm(tabPage15, 1, 1, 1, sector_list->len(sector_list));
	for (int i = 0; i < tabPage15->Controls->Count; i++)
	{
		label73->Text += tabPage15->Controls[i]->ToString();
	}
	button36->Enabled = true;
	button37->Enabled = true;
}
private: System::Void tabControl1_Selecting(System::Object^ sender, System::Windows::Forms::TabControlCancelEventArgs^ e) {
	
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	sector_list->LoadToForm_one(tabPage15, 1, 1, 1, 0, Y_TABPAGE15, -1);
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {

	Y_TABPAGE16 = Nation_list->LoadToForm(tabPage16, 1, 1, 0, Nation_list->len(Nation_list));
	button38->Enabled = true;
	button39->Enabled = true;
}
private: System::Void сохранитьДанныеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	faith_list->WriteOnFile("D:\\db\\religions.txt");

	sex_list->WriteOnFile("D:\\db\\genders.txt");

	Nation_list->WriteOnFile("D:\\db\\nations.txt");

	work_list->WriteOnFile("D:\\db\\Works.txt");

	comfort_list->WriteOnFile("D:\\db\\Levels.txt");

	sector_list->WriteOnFile("D:\\db\\Sectors.txt");

	 barack_list->WriteOnFile("D:\\db\\Baracks.txt");

	guards->WriteOnFile("D:\\db\\Guards.txt");

	p_list->WriteOnFile("D:\\db\\Prisoners.txt");
	boss->WriteOnFile("D:\\db\\SectorBosses.txt");


	p_b_list->WriteOnFile("D:\\db\\PrBr.txt");


	g_b_list->WriteOnFile("D:\\db\\GrBr.txt");





}
};

}