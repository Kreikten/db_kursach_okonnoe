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
	
	void splitString(string stroke, Nationality* nation_list, Gender* sex_list, Religion* faith_list)
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
	Prisoner* readFromFile(string filename,Nationality* nation_list, Gender* sex_list, Religion* faith_list)
	{
		Prisoner* head = new Prisoner;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, nation_list,sex_list,faith_list);
		while (getline(file, stroke)) {
			Prisoner* object = new Prisoner;
			object->splitString(stroke, nation_list, sex_list, faith_list);
			Add(head, object);
		}
		file.close();
		return head;
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

	void splitString(string stroke, Nationality* nation_list, Gender* sex_list, Religion* faith_list)
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


	Guard* readFromFile(string filename, Nationality* nation_list, Gender* sex_list, Religion* faith_list)
	{
		Guard* head = new Guard;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, nation_list, sex_list, faith_list);
		while (getline(file, stroke)) {
			Guard* object = new Guard;
			object->splitString(stroke, nation_list, sex_list, faith_list);
			Add(head, object);
		}
		file.close();
		return head;
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

	string toString()
	{
		string s;
		s = to_string(this->data.id)+"|"+this->data.Name + "|" + to_string(this->data.Type->data.id) ;
		return s;
	}

	void Sector::splitStrings(string stroke, va_list& ptr_list_param) {
		
		
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

	void splitString(string stroke, WorkType* type_list)
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


	Sector* readFromFile(string filename, WorkType* type_list)
	{
		Sector* head = new Sector;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, type_list);
		while (getline(file, stroke)) {
			Sector* object = new Sector;
			object->splitString(stroke, type_list);
			Add(head, object);
		}
		file.close();
		return head;
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
		s = to_string(this->data.id)+ "|" + to_string(this->data.Sector->data.id) + "|" + to_string(this->data.Level->data.id) + "|"+ this->data.Name ;
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

	void splitString(string stroke, ComfortLevel* level_list, Sector* sector_list)
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


	Barrack* readFromFile(string filename, ComfortLevel* level_list, Sector* sector_list)
	{
		Barrack* head = new Barrack;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, level_list, sector_list);
		while (getline(file, stroke)) {
			Barrack* object = new Barrack;
			object->splitString(stroke, level_list, sector_list);
			Add(head, object);
		}
		file.close();
		return head;
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

	void splitString(string stroke, Guard* guard_list, Sector* sector_list)
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


	BossOfSector* readFromFile(string filename, Guard* guard_list, Sector* sector_list)
	{
		BossOfSector* head = new BossOfSector;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, guard_list, sector_list);
		while (getline(file, stroke)) {
			BossOfSector* object = new BossOfSector;
			object->splitString(stroke, guard_list, sector_list);
			Add(head, object);
		}
		file.close();
		return head;
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

	void splitString(string stroke, Guard* guard_list, Barrack* b_list)
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


	GuardWorkplace* readFromFile(string filename, Guard* guard_list, Barrack* b_list)
	{
		GuardWorkplace* head = new GuardWorkplace;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, guard_list, b_list);
		while (getline(file, stroke)) {
			GuardWorkplace* object = new GuardWorkplace;
			object->splitString(stroke, guard_list, b_list);
			Add(head, object);
		}
		file.close();
		return head;
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

	void splitString(string stroke, Prisoner* p_list, Barrack* b_list)
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


	PrisonerBarrack* readFromFile(string filename, Prisoner* p_list, Barrack* b_list)
	{
		PrisonerBarrack* head = new PrisonerBarrack;

		string stroke;
		bool f; bool check;
		ifstream file(filename);

		f = true;
		getline(file, stroke);
		head->splitString(stroke, p_list, b_list);
		while (getline(file, stroke)) {
			PrisonerBarrack* object = new PrisonerBarrack;
			object->splitString(stroke, p_list, b_list);
			Add(head, object);
		}
		file.close();
		return head;
	}



};


#endif