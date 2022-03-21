#ifndef _classes_h
#define _classes_h
#include "struct.h"


using namespace std;

typedef struct _prisoner
{
	int id;
	string Surname;
	string Name;
	string Patronymic;
	string Birthdate;
	int passSerialNumber;
	int passNumber;
	string Registration;
	string Birthplace;
	string LawArticle;
	string PeriodOfImprisonment;
	string ImprisonmentStart;
	string ImprisonmentEnd;
	Nationality* Nation;
	Religion* Faith;
	Gender* Sex;
}Prisoner_;
class Prisoner : public table<Prisoner_, Prisoner>
{
public:

	string toString()
	{
		string s;
		s = to_string(this->data.id)+ "|" + this->data.Surname + "|" + this->data.Name + "|" + this->data.Patronymic + "|"+ this->data.Birthdate+"|"+to_string(this->data.passSerialNumber)+"|"+to_string(this->data.passNumber) + "|" + this->data.Birthplace+ "|" + this->data.Registration + "|" + this->data.LawArticle+ "|" + this->data.PeriodOfImprisonment+"|" + this->data.ImprisonmentStart + "|" + this->data.ImprisonmentEnd+"|"+to_string(this->data.Nation->data.id) + "|" + to_string(this->data.Faith->data.id) + "|" + to_string(this->data.Sex->data.id);
		return s;
	}
	string toStringAll()
	{
		string s;
		Prisoner* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp= temp->next;
		}

		return s;
	}
	
	void splitString(string stroke, va_list& ptr_list_param)
	{
		Nationality* nation_list = va_arg(ptr_list_param, Nationality*);
		Gender* sex_list = va_arg(ptr_list_param, Gender*);
		Religion* faith_list = va_arg(ptr_list_param, Religion*);
		
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
				this->data.Surname = pointer;
				flag++;
				break;
			case 2:
				this->data.Name = pointer;
				flag++;
				break;
			case 3:
				this->data.Patronymic = pointer;
				flag++;
				break;
			case 4:
				this->data.Birthdate = pointer;
				flag++;
				break;
			case 5:
				this->data.passSerialNumber = atoi(pointer);
				flag++;
				break;
			case 6:
				this->data.passNumber = atoi(pointer);
				flag++;
				break;
			case 7:
				this->data.Registration = pointer;
				flag++;
				break;
			case 8:
				this->data.Birthplace = pointer;
				
				flag++;
				break;
			case 9:
				this->data.LawArticle = pointer;
				flag++;
				break;
			case 10:
				this->data.PeriodOfImprisonment = pointer;
				flag++;
				break;
			case 11:
				this->data.ImprisonmentStart = pointer;
				flag++;
				break;
			case 12:
				this->data.ImprisonmentEnd = pointer;
				flag++;
				break;
			case 13:
				this->data.Nation = nation_list->search(atoi(pointer), nation_list);
				flag++;
				break;
			case 14:
				this->data.Faith = faith_list->search(atoi(pointer),faith_list);
				flag++;
				break;
			case 15:
				this->data.Sex = sex_list->search(atoi(pointer), sex_list);
				flag++;
				break;
			}

			pointer = strtok(NULL, "|");
		}
	}
	
};

typedef struct _guard
{
	int id;
	string Surname;
	string Name;
	string Patronymic;
	string Birthdate;
	int passSerialNumber;
	int passNumber;
	string Registration;
	string Rank;
	Nationality* Nation;
	Religion* Faith;
	Gender* Sex;
}Guard_;
class Guard : public table<Guard_, Guard>
{
public:

	string toString()
	{
		string s;
		s = to_string(this->data.id) +"|"+ this->data.Surname + "|" + this->data.Name + "|" + this->data.Patronymic + "|" + this->data.Birthdate + "|" + to_string(this->data.passSerialNumber) + "|" + to_string(this->data.passNumber)+ "|" + this->data.Registration+ "|" + this->data.Rank + "|" + to_string(this->data.Nation->data.id) + "|" + to_string(this->data.Faith->data.id) + "|" + to_string(this->data.Sex->data.id);
		return s;
	}

	string toStringAll()
	{
		string s;
		Guard* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}

		return s;
	}

	void splitString(string stroke, va_list& ptr_list_param)
	{
		Nationality* nation_list = va_arg(ptr_list_param, Nationality*);
		Gender* sex_list = va_arg(ptr_list_param, Gender*);
		Religion* faith_list = va_arg(ptr_list_param, Religion*);
		
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
				this->data.Surname = pointer;
				flag++;
				break;
			case 2:
				this->data.Name = pointer;
				flag++;
				break;
			case 3:
				this->data.Patronymic = pointer;
				flag++;
				break;
			case 4:
				this->data.Birthdate = pointer;
				flag++;
				break;
			case 5:
				this->data.passSerialNumber = atoi(pointer);
				flag++;
				break;
			case 6:
				this->data.passNumber = atoi(pointer);
				flag++;
				break;
			case 7:
				this->data.Registration = pointer;
				flag++;
				break;
			
			case 8:
				this->data.Rank = pointer;
				flag++;
				break;
			
			case 9:
				this->data.Nation = nation_list->search(atoi(pointer), nation_list);
				flag++;
				break;
			case 10:
				this->data.Faith = faith_list->search(atoi(pointer), faith_list);
				flag++;
				break;
			case 11:
				this->data.Sex = sex_list->search(atoi(pointer), sex_list);
				flag++;
				break;
			}

			pointer = strtok(NULL, "|");
		}
	}


	
};

typedef struct _sector
{
	int id;
	string Name;
	WorkType* Type;
}Sector_;
class Sector : public table< Sector_, Sector>
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
				_Label->Text = L"Имя сектора";
				f++;
				x += 170;
				break;

			case 2:
				_Label->Text = L"Тип работ";
				f++;
				f = 0;
				break;
			}
			page->Controls->Add(_Label);
			
		}
		
			
		}
	


	int LoadToForm_one(System::Windows::Forms::TabPage^ page,int count_textBox, int count_numericUpDown, int count_dropDownList, int X, int Y, int id)
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
				txt->Text = gcnew System::String(this->search(id, this)->data.Name.c_str());

				page->Controls->Add(txt);
				X += 180;
			}

			for (int cnt = 0; cnt < count_dropDownList; cnt++)
			{
				System::Windows::Forms::ComboBox^ cmb;
				cmb = gcnew System::Windows::Forms::ComboBox();

				cmb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				cmb->FormattingEnabled = true;
				cmb->Location = System::Drawing::Point(X, Y);
				cmb->Name = L"comboBox1";
				cmb->Size = System::Drawing::Size(121, 24);
				cmb->TabIndex = 14;
				cmb->Items->Add(gcnew System::String(this->search(id, this)->data.Type->data.type.c_str()));
				cmb->SelectedIndex = 0;
				page->Controls->Add(cmb);
				X += 100;
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

			for (int cnt = 0; cnt < count_dropDownList; cnt++)
			{
				System::Windows::Forms::ComboBox^ cmb;
				cmb = gcnew System::Windows::Forms::ComboBox();

				cmb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				cmb->FormattingEnabled = true;
				cmb->Location = System::Drawing::Point(X, Y);
				cmb->Name = L"comboBox1";
				cmb->Size = System::Drawing::Size(121, 24);
				cmb->TabIndex = 14;
				cmb->Items->Add(gcnew System::String(this->search(1, this)->data.Type->data.type.c_str()));
				cmb->SelectedIndex = 0;
				page->Controls->Add(cmb);
				X += 100;
			}
		}
		return Y;
		
	}



	string toString()
	{
		string s;
		s = to_string(this->data.id)+"|"+this->data.Name + "|" + to_string(this->data.Type->data.id) ;
		return s;
	}

	void splitString(string stroke, va_list& ptr_list_param) {
		
		
			WorkType* type_list = va_arg(ptr_list_param, WorkType*); 
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
					this->data.Name = pointer;
					flag++;
					break;
				case 2:
					this->data.Type = type_list->search(atoi(pointer), type_list);
					flag++;
					break;
				}

				pointer = strtok(NULL, "|");
			}
		
	}

	string toStringAll()
	{
		string s;
		Sector* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}

		return s;
	}


	


};

typedef struct _barrack
{
	int id;
	string Name;
	ComfortLevel* Level;
	Sector* Sector;
}Barrack_;
class Barrack : public table< Barrack_, Barrack>
{
public:

	string toString()
	{
		string s;
		s = to_string(this->data.id) + "|" + to_string(this->data.Level->data.id) + "|" + to_string(this->data.Sector->data.id)  + "|"+ this->data.Name ;
		return s;
	}






	string toStringAll()
	{
		string s;
		Barrack* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}

		return s;
	}

	void splitString(string stroke, va_list& ptr_list_param)
	{
		ComfortLevel* level_list = va_arg(ptr_list_param, ComfortLevel*);
		Sector* sector_list = va_arg(ptr_list_param, Sector*);
		
		
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
				this->data.Level = level_list->search(atoi(pointer), level_list);
				flag++;
				break;
			case 2:
				
				this->data.Sector = sector_list->search(atoi(pointer), sector_list);
				flag++;
				break;

			case 3:
				
				this->data.Name = pointer;
				flag++;
				break;
			}

			pointer = strtok(NULL, "|");
		}
	}



};







typedef struct _prisonersnbarracks
{
	int id;
	Prisoner* prisoner;
	Barrack* barrack;
}PrisonerBarrack_;
typedef struct _guardworkplace
{
	int id;
	Guard* guard;
	Barrack* barrack;
	bool isBoss;
}GuardWorkplace_;


typedef struct _bossofsectors
{
	int id;
	Guard* guard;
	Sector* sector;
}BossOfSector_;
class BossOfSector : public table<BossOfSector_, BossOfSector>
{
public:

	string toString()
	{
		string s;
		s = to_string(this->data.id) + "|"+ to_string(this->data.guard->data.id) + "|" + to_string(this->data.sector->data.id);
		return s;
	}

	string toStringAll()
	{
		string s;
		BossOfSector* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}

		return s;
	}

	void splitString(string stroke, va_list& ptr_list_param)
	{
		Guard* guard_list = va_arg(ptr_list_param, Guard*);
		Sector* sector_list = va_arg(ptr_list_param, Sector*);
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
				this->data.guard = guard_list->search(atoi(pointer), guard_list);
				flag++;
				break;

			case 2:
				this->data.sector = sector_list->search(atoi(pointer), sector_list);
				flag++;
				break;
			
			}

			pointer = strtok(NULL, "|");
		}
	}


	

};


class GuardWorkplace : public table<GuardWorkplace_, GuardWorkplace>
{
public:

	string toString()
	{
		string s;
		s = to_string(this->data.id) + "|" + to_string(this->data.guard->data.id) + "|" + to_string(this->data.barrack->data.id)+"|"+to_string(this->data.isBoss);
		return s;
	}

	string toStringAll()
	{
		string s;
		GuardWorkplace* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}

		return s;
	}

	void splitString(string stroke, va_list& ptr_list_param)
	{
		Guard* guard_list = va_arg(ptr_list_param, Guard*);
		Barrack* b_list = va_arg(ptr_list_param, Barrack*);
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
				this->data.guard = guard_list->search(atoi(pointer), guard_list);
				flag++;
				break;

			case 2:
				this->data.barrack = b_list->search(atoi(pointer), b_list);
				flag++;
				break;
			case 3:
				this->data.isBoss =atoi(pointer);
				flag++;
				break;

			}

			pointer = strtok(NULL, "|");
		}
	}



};
class PrisonerBarrack : public table<PrisonerBarrack_, PrisonerBarrack>
{
public:

	string toString()
	{
		string s;
		s = to_string(this->data.id) + "|" + to_string(this->data.prisoner->data.id) + "|" + to_string(this->data.barrack->data.id);
		return s;
	}
	string toStringAll()
	{
		string s;
		PrisonerBarrack* temp;
		temp = this;
		while (temp != nullptr)
		{
			s = s + temp->toString() + "\n";
			temp = temp->next;
		}

		return s;
	}

	void splitString(string stroke , va_list& ptr_list_param)
	{
		Prisoner* p_list = va_arg(ptr_list_param, Prisoner*);
		Barrack* b_list = va_arg(ptr_list_param, Barrack*);
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
				this->data.prisoner = p_list->search(atoi(pointer), p_list);
				flag++;
				break;

			case 2:
				this->data.barrack = b_list->search(atoi(pointer), b_list);
				flag++;
				break;
			
			}

			pointer = strtok(NULL, "|");
		}
	}


	


};


#endif