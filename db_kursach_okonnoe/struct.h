#ifndef struct_h
#define struct_h
#define _CRT_SECURE_NO_WARNINGS
#include "_table.h"




typedef struct data
{
	int day;
	int month;
	int year;
}Datetime;
typedef struct _nationality
{
	int id;
	string nation;
}Nationality_;
typedef struct _religion
{
	int id;
	string religion;

}Religion_;
typedef struct _gender
{
	int id;
	string gender;

}Gender_;
typedef struct _comfortlevel
{
	int id;
	string level;

}ComfortLevel_;
typedef struct _worktype
{
	int id;
	string type;

}WorkType_;


class Nationality : public table<Nationality_, Nationality>
{
public:

	void CreateLabels(System::Windows::Forms::TabPage^ page, int count_label)
	{
		int x, y;
		x = 0;
		int f;
		f = 0;
		y = 0;
		int count = 200;
		for (int cnt = 0; cnt < count_label; cnt++)
		{

			System::Windows::Forms::Label^ _Label;
			_Label = gcnew System::Windows::Forms::Label();
			_Label->AutoSize = true;
			_Label->Location = System::Drawing::Point(x, y);
			_Label->Name = L"_Label";
			_Label->Size = System::Drawing::Size(137, 17);
			_Label->TabIndex = count;
			count++;
			switch (f)
			{
			case 0:
				_Label->Text = L"id";
				f++;
				x += 150;
				break;

			case 1:
				_Label->Text = L"Национальность";
				f=0;
				x += 170;
				break;

			
			}
			page->Controls->Add(_Label);

		}


	}



	int LoadToForm_one(System::Windows::Forms::TabPage^ page, int count_textBox, int count_numericUpDown, int count_dropDownList, int X, int Y, int id)
	{
		if (id != -1)
		{
			for (int cnt = 0; cnt < count_numericUpDown; cnt++)
			{

				System::Windows::Forms::NumericUpDown^ But;
				But = gcnew System::Windows::Forms::NumericUpDown();
				But->Location = System::Drawing::Point(X, Y);
				But->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
				System::Decimal val;
				//for (int te=1;te<id;te++)
				//{ 
				//	But->UpButton();
				//}
				val = System::Convert::ToDecimal(id);
				But->Value = val;


				But->Name = L"num1";
				But->ReadOnly = true;
				But->Size = System::Drawing::Size(120, 22);
				But->TabIndex = 5;
				//	But->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
				page->Controls->Add(But);
				X += 130;
			}

			for (int cnt = 0; cnt < count_textBox; cnt++)
			{
				System::Windows::Forms::TextBox^ txt;
				txt = gcnew System::Windows::Forms::TextBox();

				txt->Location = System::Drawing::Point(X, Y);
				txt->Name = L"textBox1";
				txt->Size = System::Drawing::Size(150, 22);
				txt->TabIndex = 6;
				txt->Text = gcnew System::String(this->search(id, this)->data.nation.c_str());

				page->Controls->Add(txt);
				X += 180;
			}

			

		}
		else
		{
			for (int cnt = 0; cnt < count_numericUpDown; cnt++)
			{

				System::Windows::Forms::NumericUpDown^ But;
				But = gcnew System::Windows::Forms::NumericUpDown();
				But->Location = System::Drawing::Point(X, Y);
				But->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });

				But->Value = 1;


				But->Name = L"num1";
				But->ReadOnly = true;
				But->Size = System::Drawing::Size(120, 22);
				But->TabIndex = 5;
				//	But->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
				page->Controls->Add(But);
				X += 130;
			}

			for (int cnt = 0; cnt < count_textBox; cnt++)
			{
				System::Windows::Forms::TextBox^ txt;
				txt = gcnew System::Windows::Forms::TextBox();

				txt->Location = System::Drawing::Point(X, Y);
				txt->Name = L"textBox1";
				txt->Size = System::Drawing::Size(150, 22);
				txt->TabIndex = 6;
				txt->Text = "Sector";

				page->Controls->Add(txt);
				X += 180;
			}

			
		}
		return Y;

	}




	string toStringAll()
	{
		string s;
		Nationality* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() ;
			temp = temp->next;
		}
		
		return s;
	}
	string toString()
	{
		string s;
		s = s + to_string(this->data.id) +"|"+ this->data.nation + "|" +"\n";
		return s;
	}
	void splitString(string stroke, va_list& ptr_list_param)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.nation = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	
};
class Religion : public table<Religion_, Religion>
{
public:
	string toStringAll()
	{
		string s;
		Religion* head;
		head = this;
		while (head != nullptr)
		{
			s = s + head->toString();
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + to_string(this->data.id) + "|" + this->data.religion + "\n"; 
		return s;
	}
	void splitString(string stroke, va_list& ptr_list_param)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.religion = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	
};
class Gender : public table<Gender_, Gender>
{
public:

	string toStringAll()
	{
		string s;
		Gender* head;
		head = this;
		while (head != nullptr)
		{
			s = s + head->toString();
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + to_string(this->data.id) + "|" + this->data.gender + "\n";
		return s;
	}
	void splitString(string stroke, va_list& ptr_list_param)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.gender = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	
};
class ComfortLevel : public table<ComfortLevel_, ComfortLevel>
{
public:
	string toStringAll()
	{
		string s;
		ComfortLevel* head;
		head = this;
		while (head != nullptr)
		{
			s = s + head->toString();
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + to_string(this->data.id) + "|" + this->data.level +  "\n";
		return s;
	}
	void splitString(string stroke, va_list& ptr_list_param)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.level = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	
};
class WorkType : public table< WorkType_, WorkType>
{
public:
	string toStringAll()
	{
		string s;
		WorkType* head;
			head = this;
		while (head != nullptr)
		{
			s = s + head->toString();
			head = head->next;
		}

		return s;
	}
	string toString()
	{
		string s;
		s = s + to_string(this->data.id) + "|" + this->data.type + "\n";
		return s;
	}
	void splitString(string stroke, va_list& ptr_list_param)
	{
		char* pointer = _strdup(stroke.c_str());
		pointer = strtok(pointer, "|");
		int flag = 0;
		while (pointer != NULL)
		{
			switch (flag)
			{
			case 0:
				this->data.id = atoi(pointer);
				flag++;
				break;

			case 1:
				this->data.type = pointer;
				flag++;
				break;
			}
			pointer = strtok(NULL, "|");
		}
	}
	
};



#endif