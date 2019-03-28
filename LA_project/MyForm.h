#pragma once
#include "matrix.h"
#include "new.h"
#define width 60	
#define height 40
#define R Convert::ToInt32(numericUpDown1->Value)
#define C Convert::ToInt32(numericUpDown2->Value)
#define err -6.27743856220419E+66
int a = 0, s = 0, m = 0, mn = 0;
//matrix mat(10, 10);

namespace LAproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	using namespace MetroFramework::Controls;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public MetroForm
	{
	public:

		MyForm(void)
		{
			InitializeComponent();
			metroGrid3->Columns->Clear();
			metroGrid3->Rows->Clear();
			metroGrid3->Columns->Add("R", "0");
			metroGrid3->Rows->Add();
			numericUpDown2->Value = 1;
			numericUpDown1->Value = 1;
			numericUpDown3->Value = 1;
			metroGrid3->Columns[0]->Width = width;
			metroGrid3->Rows[0]->Height = height;
			metroGrid3->Rows[0]->Cells[0]->Value = "0";
			matrix mat(R, C);
			mat.mymatrix[0][0] = 0;
			matrix mat1(R, R);
			change_eq(R, C, metroGrid17, mat.mymatrix);
			change(R, C, metroGrid18, mat1.mymatrix);
			change(R, C, metroGrid19, mat1.mymatrix);


			//
			//TODO: Add the constructor code here
			//
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









	private: MetroFramework::Controls::MetroTabControl^  metroTabControl1;







	private: MetroFramework::Controls::MetroTabPage^  metroTabPage2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;


	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	public: MetroFramework::Controls::MetroGrid^  metroGrid3;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage3;
	public: MetroFramework::Controls::MetroGrid^  metroGrid1;
	private:
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage4;
	public:
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage5;
	private: MetroFramework::Controls::MetroTabControl^  metroTabControl2;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage7;

	private: MetroFramework::Controls::MetroTabPage^  metroTabPage8;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage9;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage12;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage10;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage11;
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroButton^  metroButton3;
	public: MetroFramework::Controls::MetroGrid^  metroGrid2;
	private:
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage1;
	public:
	private: MetroFramework::Controls::MetroButton^  metroButton4;
	public: MetroFramework::Controls::MetroGrid^  metroGrid4;
	private: MetroFramework::Controls::MetroTabPage^  metroTabPage13;
	public:
	private: MetroFramework::Controls::MetroButton^  metroButton5;
	public: MetroFramework::Controls::MetroGrid^  metroGrid5;

	public:
	private: MetroFramework::Controls::MetroLabel^  metroLabel6;
	private: MetroFramework::Controls::MetroLabel^  metroLabel8;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;
	public: MetroFramework::Controls::MetroGrid^  metroGrid8;
	private:
	public: MetroFramework::Controls::MetroGrid^  metroGrid7;
	public: MetroFramework::Controls::MetroGrid^  metroGrid6;
	private: MetroFramework::Controls::MetroButton^  metroButton6;
	private: MetroFramework::Controls::MetroButton^  metroButton7;
	public: MetroFramework::Controls::MetroGrid^  metroGrid9;
	private:
	public: MetroFramework::Controls::MetroGrid^  metroGrid10;
	public: MetroFramework::Controls::MetroGrid^  metroGrid11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	public:
	private: MetroFramework::Controls::MetroButton^  metroButton8;
	public: MetroFramework::Controls::MetroGrid^  metroGrid12;
	private:
	public: MetroFramework::Controls::MetroGrid^  metroGrid13;
	public: MetroFramework::Controls::MetroGrid^  metroGrid14;
	private: MetroFramework::Controls::MetroButton^  metroButton9;
	public:
	public: MetroFramework::Controls::MetroGrid^  metroGrid15;
	private:
	public: MetroFramework::Controls::MetroGrid^  metroGrid16;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox3;
private: MetroFramework::Controls::MetroButton^  metroButton10;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage14;
public: MetroFramework::Controls::MetroGrid^  metroGrid19;
private:
public: MetroFramework::Controls::MetroGrid^  metroGrid18;
private: MetroFramework::Controls::MetroButton^  metroButton11;
public:
private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
public: MetroFramework::Controls::MetroGrid^  metroGrid17;
private: MetroFramework::Controls::MetroTabPage^  metroTabPage15;
private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
private: MetroFramework::Controls::MetroLabel^  metroLabel7;
private: MetroFramework::Controls::MetroLabel^  metroLabel9;
private: MetroFramework::Controls::MetroLabel^  metroLabel10;
private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
public: MetroFramework::Controls::MetroGrid^  metroGrid20;
private:

private:

public:


public:

public:
private:
	public:

	public:

	private:

	public:

	public:
	private:
	private:






	public:
	private:

	private:



	private:



	private:

	public:
	public:
	private:


	public:



	private:
	public:
	private:











	protected:

	protected:





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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle29 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle30 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle31 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle32 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle33 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle34 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle35 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle36 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle37 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle38 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle39 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle40 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle41 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle42 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle43 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle44 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle45 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle46 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle47 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle48 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle49 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle50 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle51 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle52 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle53 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle54 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle55 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle56 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle57 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle58 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle59 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle60 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle61 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle62 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle63 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle64 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle65 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle66 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle67 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle68 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle69 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle70 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle71 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle72 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle73 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle74 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle75 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle76 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle77 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle78 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle79 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle80 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->metroTabControl1 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage2 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton10 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid3 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTabPage3 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid1 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage4 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid2 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage5 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroTabControl2 = (gcnew MetroFramework::Controls::MetroTabControl());
			this->metroTabPage7 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid8 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid7 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid6 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage8 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroButton7 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid9 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid10 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid11 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage9 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroButton8 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid12 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid13 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid14 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage1 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroTextBox3 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroButton9 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid15 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid16 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage12 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel8 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid4 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage13 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroGrid5 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroTabPage14 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroLabel10 = (gcnew MetroFramework::Controls::MetroLabel());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid19 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroGrid18 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroButton11 = (gcnew MetroFramework::Controls::MetroButton());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->metroGrid17 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroLabel9 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroTabPage15 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroGrid20 = (gcnew MetroFramework::Controls::MetroGrid());
			this->metroLabel7 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTabPage10 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroTabPage11 = (gcnew MetroFramework::Controls::MetroTabPage());
			this->metroTabControl1->SuspendLayout();
			this->metroTabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid3))->BeginInit();
			this->metroTabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid1))->BeginInit();
			this->metroTabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid2))->BeginInit();
			this->metroTabPage5->SuspendLayout();
			this->metroTabControl2->SuspendLayout();
			this->metroTabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid6))->BeginInit();
			this->metroTabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid11))->BeginInit();
			this->metroTabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid14))->BeginInit();
			this->metroTabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid16))->BeginInit();
			this->metroTabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid4))->BeginInit();
			this->metroTabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid5))->BeginInit();
			this->metroTabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid17))->BeginInit();
			this->metroTabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid20))->BeginInit();
			this->SuspendLayout();
			// 
			// metroTabControl1
			// 
			this->metroTabControl1->Controls->Add(this->metroTabPage2);
			this->metroTabControl1->Controls->Add(this->metroTabPage3);
			this->metroTabControl1->Controls->Add(this->metroTabPage4);
			this->metroTabControl1->Controls->Add(this->metroTabPage5);
			this->metroTabControl1->Controls->Add(this->metroTabPage12);
			this->metroTabControl1->Controls->Add(this->metroTabPage13);
			this->metroTabControl1->Controls->Add(this->metroTabPage14);
			this->metroTabControl1->Controls->Add(this->metroTabPage15);
			this->metroTabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->metroTabControl1->Location = System::Drawing::Point(20, 60);
			this->metroTabControl1->Name = L"metroTabControl1";
			this->metroTabControl1->SelectedIndex = 0;
			this->metroTabControl1->Size = System::Drawing::Size(1054, 551);
			this->metroTabControl1->Style = MetroFramework::MetroColorStyle::Orange;
			this->metroTabControl1->TabIndex = 8;
			this->metroTabControl1->UseSelectable = true;
			// 
			// metroTabPage2
			// 
			this->metroTabPage2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->metroTabPage2->Controls->Add(this->metroButton10);
			this->metroTabPage2->Controls->Add(this->metroButton1);
			this->metroTabPage2->Controls->Add(this->metroTextBox2);
			this->metroTabPage2->Controls->Add(this->metroTextBox1);
			this->metroTabPage2->Controls->Add(this->metroLabel4);
			this->metroTabPage2->Controls->Add(this->metroLabel2);
			this->metroTabPage2->Controls->Add(this->metroLabel1);
			this->metroTabPage2->Controls->Add(this->numericUpDown1);
			this->metroTabPage2->Controls->Add(this->numericUpDown2);
			this->metroTabPage2->Controls->Add(this->metroGrid3);
			this->metroTabPage2->Controls->Add(this->metroLabel3);
			this->metroTabPage2->HorizontalScrollbarBarColor = true;
			this->metroTabPage2->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->HorizontalScrollbarSize = 10;
			this->metroTabPage2->Location = System::Drawing::Point(4, 38);
			this->metroTabPage2->Name = L"metroTabPage2";
			this->metroTabPage2->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage2->TabIndex = 1;
			this->metroTabPage2->Text = L"Ana Matris";
			this->metroTabPage2->UseCustomBackColor = true;
			this->metroTabPage2->VerticalScrollbarBarColor = true;
			this->metroTabPage2->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage2->VerticalScrollbarSize = 10;
			this->metroTabPage2->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage2_Click);
			// 
			// metroButton10
			// 
			this->metroButton10->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton10->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton10->Location = System::Drawing::Point(798, 15);
			this->metroButton10->Name = L"metroButton10";
			this->metroButton10->Size = System::Drawing::Size(105, 38);
			this->metroButton10->TabIndex = 17;
			this->metroButton10->Text = L"Hesapla";
			this->metroButton10->UseSelectable = true;
			this->metroButton10->Click += gcnew System::EventHandler(this, &MyForm::metroButton10_Click);
			// 
			// metroButton1
			// 
			this->metroButton1->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton1->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton1->Location = System::Drawing::Point(920, 15);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(105, 38);
			this->metroButton1->TabIndex = 16;
			this->metroButton1->Text = L"Rastgele Üret";
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &MyForm::metroButton1_Click);
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(83, 2);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(19, 19);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = true;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Enabled = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"0" };
			this->metroTextBox2->Location = System::Drawing::Point(3, 288);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ReadOnly = true;
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(105, 24);
			this->metroTextBox2->TabIndex = 15;
			this->metroTextBox2->Text = L"0";
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox2->Click += gcnew System::EventHandler(this, &MyForm::metroTextBox2_Click);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(79, 2);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(19, 19);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = true;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Enabled = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"0" };
			this->metroTextBox1->Location = System::Drawing::Point(7, 213);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ReadOnly = true;
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(101, 24);
			this->metroTextBox1->TabIndex = 15;
			this->metroTextBox1->Text = L"0";
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox1->Click += gcnew System::EventHandler(this, &MyForm::metroTextBox1_Click_1);
			// 
			// metroLabel4
			// 
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel4->Location = System::Drawing::Point(3, 260);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(50, 25);
			this->metroLabel4->TabIndex = 14;
			this->metroLabel4->Text = L"Rank";
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(38, 95);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(50, 20);
			this->metroLabel2->TabIndex = 14;
			this->metroLabel2->Text = L"Satırlar";
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(114, 15);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(60, 20);
			this->metroLabel1->TabIndex = 14;
			this->metroLabel1->Text = L"Sutünler";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(45, 68);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(70, 24);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged_2);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(114, 38);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(68, 24);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged_2);
			// 
			// metroGrid3
			// 
			this->metroGrid3->AllowDrop = true;
			this->metroGrid3->AllowUserToAddRows = false;
			this->metroGrid3->AllowUserToDeleteRows = false;
			this->metroGrid3->AllowUserToResizeRows = false;
			this->metroGrid3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid3->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid3->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->metroGrid3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid3->ColumnHeadersVisible = false;
			this->metroGrid3->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid3->DefaultCellStyle = dataGridViewCellStyle2;
			this->metroGrid3->EnableHeadersVisualStyles = false;
			this->metroGrid3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid3->GridColor = System::Drawing::Color::White;
			this->metroGrid3->Location = System::Drawing::Point(121, 68);
			this->metroGrid3->MultiSelect = false;
			this->metroGrid3->Name = L"metroGrid3";
			this->metroGrid3->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid3->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->metroGrid3->RowHeadersVisible = false;
			this->metroGrid3->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->NullValue = nullptr;
			this->metroGrid3->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->metroGrid3->RowTemplate->Height = 40;
			this->metroGrid3->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid3->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid3->Size = System::Drawing::Size(910, 424);
			this->metroGrid3->TabIndex = 13;
			this->metroGrid3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid3_CellContentClick_1);
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->FontSize = MetroFramework::MetroLabelSize::Tall;
			this->metroLabel3->Location = System::Drawing::Point(3, 184);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(112, 25);
			this->metroLabel3->TabIndex = 14;
			this->metroLabel3->Text = L"Determinant";
			// 
			// metroTabPage3
			// 
			this->metroTabPage3->Controls->Add(this->metroButton2);
			this->metroTabPage3->Controls->Add(this->metroGrid1);
			this->metroTabPage3->HorizontalScrollbarBarColor = true;
			this->metroTabPage3->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->HorizontalScrollbarSize = 10;
			this->metroTabPage3->Location = System::Drawing::Point(4, 38);
			this->metroTabPage3->Name = L"metroTabPage3";
			this->metroTabPage3->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage3->TabIndex = 2;
			this->metroTabPage3->Text = L"Transpoz";
			this->metroTabPage3->VerticalScrollbarBarColor = true;
			this->metroTabPage3->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage3->VerticalScrollbarSize = 10;
			this->metroTabPage3->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage3_Click_1);
			this->metroTabPage3->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage3_Enter);
			// 
			// metroButton2
			// 
			this->metroButton2->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton2->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton2->Location = System::Drawing::Point(15, 17);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(111, 38);
			this->metroButton2->TabIndex = 17;
			this->metroButton2->Text = L"Ana Matrisi Yap";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &MyForm::metroButton2_Click_1);
			// 
			// metroGrid1
			// 
			this->metroGrid1->AllowDrop = true;
			this->metroGrid1->AllowUserToAddRows = false;
			this->metroGrid1->AllowUserToDeleteRows = false;
			this->metroGrid1->AllowUserToResizeRows = false;
			this->metroGrid1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->metroGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid1->ColumnHeadersVisible = false;
			this->metroGrid1->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->DefaultCellStyle = dataGridViewCellStyle6;
			this->metroGrid1->EnableHeadersVisualStyles = false;
			this->metroGrid1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid1->GridColor = System::Drawing::Color::White;
			this->metroGrid1->Location = System::Drawing::Point(15, 70);
			this->metroGrid1->Name = L"metroGrid1";
			this->metroGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid1->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->metroGrid1->RowHeadersVisible = false;
			this->metroGrid1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->NullValue = nullptr;
			this->metroGrid1->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->metroGrid1->RowTemplate->Height = 40;
			this->metroGrid1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid1->Size = System::Drawing::Size(1013, 424);
			this->metroGrid1->TabIndex = 14;
			this->metroGrid1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid1_CellContentClick_1);
			// 
			// metroTabPage4
			// 
			this->metroTabPage4->Controls->Add(this->metroLabel6);
			this->metroTabPage4->Controls->Add(this->metroButton3);
			this->metroTabPage4->Controls->Add(this->metroGrid2);
			this->metroTabPage4->HorizontalScrollbarBarColor = true;
			this->metroTabPage4->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage4->HorizontalScrollbarSize = 10;
			this->metroTabPage4->Location = System::Drawing::Point(4, 38);
			this->metroTabPage4->Name = L"metroTabPage4";
			this->metroTabPage4->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage4->TabIndex = 0;
			this->metroTabPage4->Text = L"Birim Matris";
			this->metroTabPage4->VerticalScrollbarBarColor = true;
			this->metroTabPage4->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage4->VerticalScrollbarSize = 10;
			this->metroTabPage4->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage4_Click);
			this->metroTabPage4->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage4_Enter);
			// 
			// metroLabel6
			// 
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(505, 244);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(73, 20);
			this->metroLabel6->TabIndex = 22;
			this->metroLabel6->Text = L"Kare Degil";
			// 
			// metroButton3
			// 
			this->metroButton3->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton3->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton3->Location = System::Drawing::Point(15, 17);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(111, 38);
			this->metroButton3->TabIndex = 18;
			this->metroButton3->Text = L"Ana Matrisi Yap";
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &MyForm::metroButton3_Click);
			// 
			// metroGrid2
			// 
			this->metroGrid2->AllowDrop = true;
			this->metroGrid2->AllowUserToAddRows = false;
			this->metroGrid2->AllowUserToDeleteRows = false;
			this->metroGrid2->AllowUserToResizeRows = false;
			this->metroGrid2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid2->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->metroGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid2->ColumnHeadersVisible = false;
			this->metroGrid2->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid2->DefaultCellStyle = dataGridViewCellStyle10;
			this->metroGrid2->EnableHeadersVisualStyles = false;
			this->metroGrid2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid2->GridColor = System::Drawing::Color::White;
			this->metroGrid2->Location = System::Drawing::Point(15, 71);
			this->metroGrid2->Name = L"metroGrid2";
			this->metroGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid2->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->metroGrid2->RowHeadersVisible = false;
			this->metroGrid2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->NullValue = nullptr;
			this->metroGrid2->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->metroGrid2->RowTemplate->Height = 40;
			this->metroGrid2->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid2->Size = System::Drawing::Size(1013, 422);
			this->metroGrid2->TabIndex = 15;
			// 
			// metroTabPage5
			// 
			this->metroTabPage5->Controls->Add(this->metroTabControl2);
			this->metroTabPage5->HorizontalScrollbarBarColor = false;
			this->metroTabPage5->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage5->HorizontalScrollbarSize = 1;
			this->metroTabPage5->Location = System::Drawing::Point(4, 38);
			this->metroTabPage5->Name = L"metroTabPage5";
			this->metroTabPage5->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage5->TabIndex = 0;
			this->metroTabPage5->Text = L"İşlemler";
			this->metroTabPage5->VerticalScrollbarBarColor = false;
			this->metroTabPage5->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage5->VerticalScrollbarSize = 1;
			this->metroTabPage5->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage5_Click);
			this->metroTabPage5->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage5_Enter);
			// 
			// metroTabControl2
			// 
			this->metroTabControl2->Controls->Add(this->metroTabPage7);
			this->metroTabControl2->Controls->Add(this->metroTabPage8);
			this->metroTabControl2->Controls->Add(this->metroTabPage9);
			this->metroTabControl2->Controls->Add(this->metroTabPage1);
			this->metroTabControl2->Location = System::Drawing::Point(3, 4);
			this->metroTabControl2->Name = L"metroTabControl2";
			this->metroTabControl2->SelectedIndex = 0;
			this->metroTabControl2->Size = System::Drawing::Size(1046, 509);
			this->metroTabControl2->Style = MetroFramework::MetroColorStyle::Orange;
			this->metroTabControl2->TabIndex = 2;
			this->metroTabControl2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTabControl2->UseSelectable = true;
			// 
			// metroTabPage7
			// 
			this->metroTabPage7->Controls->Add(this->metroButton6);
			this->metroTabPage7->Controls->Add(this->metroGrid8);
			this->metroTabPage7->Controls->Add(this->metroGrid7);
			this->metroTabPage7->Controls->Add(this->metroGrid6);
			this->metroTabPage7->HorizontalScrollbarBarColor = true;
			this->metroTabPage7->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage7->HorizontalScrollbarSize = 10;
			this->metroTabPage7->Location = System::Drawing::Point(4, 38);
			this->metroTabPage7->Name = L"metroTabPage7";
			this->metroTabPage7->Size = System::Drawing::Size(1038, 467);
			this->metroTabPage7->TabIndex = 0;
			this->metroTabPage7->Text = L"Toplama";
			this->metroTabPage7->VerticalScrollbarBarColor = true;
			this->metroTabPage7->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage7->VerticalScrollbarSize = 10;
			this->metroTabPage7->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage7_Click);
			this->metroTabPage7->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage7_Enter);
			// 
			// metroButton6
			// 
			this->metroButton6->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton6->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton6->Location = System::Drawing::Point(24, 11);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(111, 38);
			this->metroButton6->TabIndex = 18;
			this->metroButton6->Text = L"Heaspla";
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &MyForm::metroButton6_Click);
			// 
			// metroGrid8
			// 
			this->metroGrid8->AllowDrop = true;
			this->metroGrid8->AllowUserToAddRows = false;
			this->metroGrid8->AllowUserToDeleteRows = false;
			this->metroGrid8->AllowUserToResizeRows = false;
			this->metroGrid8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid8->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid8->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid8->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid8->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->metroGrid8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid8->ColumnHeadersVisible = false;
			this->metroGrid8->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid8->DefaultCellStyle = dataGridViewCellStyle14;
			this->metroGrid8->EnableHeadersVisualStyles = false;
			this->metroGrid8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid8->GridColor = System::Drawing::Color::White;
			this->metroGrid8->Location = System::Drawing::Point(692, 59);
			this->metroGrid8->MultiSelect = false;
			this->metroGrid8->Name = L"metroGrid8";
			this->metroGrid8->ReadOnly = true;
			this->metroGrid8->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid8->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->metroGrid8->RowHeadersVisible = false;
			this->metroGrid8->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle16->NullValue = nullptr;
			this->metroGrid8->RowsDefaultCellStyle = dataGridViewCellStyle16;
			this->metroGrid8->RowTemplate->Height = 40;
			this->metroGrid8->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid8->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid8->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid8->Size = System::Drawing::Size(315, 381);
			this->metroGrid8->TabIndex = 16;
			this->metroGrid8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid8_CellContentClick);
			// 
			// metroGrid7
			// 
			this->metroGrid7->AllowDrop = true;
			this->metroGrid7->AllowUserToAddRows = false;
			this->metroGrid7->AllowUserToDeleteRows = false;
			this->metroGrid7->AllowUserToResizeRows = false;
			this->metroGrid7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid7->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid7->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid7->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid7->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle17;
			this->metroGrid7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid7->ColumnHeadersVisible = false;
			this->metroGrid7->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid7->DefaultCellStyle = dataGridViewCellStyle18;
			this->metroGrid7->EnableHeadersVisualStyles = false;
			this->metroGrid7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid7->GridColor = System::Drawing::Color::White;
			this->metroGrid7->Location = System::Drawing::Point(358, 59);
			this->metroGrid7->MultiSelect = false;
			this->metroGrid7->Name = L"metroGrid7";
			this->metroGrid7->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid7->RowHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->metroGrid7->RowHeadersVisible = false;
			this->metroGrid7->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle20->NullValue = nullptr;
			this->metroGrid7->RowsDefaultCellStyle = dataGridViewCellStyle20;
			this->metroGrid7->RowTemplate->Height = 40;
			this->metroGrid7->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid7->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid7->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid7->Size = System::Drawing::Size(315, 381);
			this->metroGrid7->TabIndex = 15;
			// 
			// metroGrid6
			// 
			this->metroGrid6->AllowDrop = true;
			this->metroGrid6->AllowUserToAddRows = false;
			this->metroGrid6->AllowUserToDeleteRows = false;
			this->metroGrid6->AllowUserToResizeRows = false;
			this->metroGrid6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid6->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid6->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid6->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->metroGrid6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid6->ColumnHeadersVisible = false;
			this->metroGrid6->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid6->DefaultCellStyle = dataGridViewCellStyle22;
			this->metroGrid6->EnableHeadersVisualStyles = false;
			this->metroGrid6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid6->GridColor = System::Drawing::Color::White;
			this->metroGrid6->Location = System::Drawing::Point(24, 59);
			this->metroGrid6->MultiSelect = false;
			this->metroGrid6->Name = L"metroGrid6";
			this->metroGrid6->ReadOnly = true;
			this->metroGrid6->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid6->RowHeadersDefaultCellStyle = dataGridViewCellStyle23;
			this->metroGrid6->RowHeadersVisible = false;
			this->metroGrid6->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle24->NullValue = nullptr;
			this->metroGrid6->RowsDefaultCellStyle = dataGridViewCellStyle24;
			this->metroGrid6->RowTemplate->Height = 40;
			this->metroGrid6->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid6->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid6->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid6->Size = System::Drawing::Size(315, 381);
			this->metroGrid6->TabIndex = 14;
			// 
			// metroTabPage8
			// 
			this->metroTabPage8->Controls->Add(this->metroButton7);
			this->metroTabPage8->Controls->Add(this->metroGrid9);
			this->metroTabPage8->Controls->Add(this->metroGrid10);
			this->metroTabPage8->Controls->Add(this->metroGrid11);
			this->metroTabPage8->HorizontalScrollbarBarColor = true;
			this->metroTabPage8->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage8->HorizontalScrollbarSize = 10;
			this->metroTabPage8->Location = System::Drawing::Point(4, 38);
			this->metroTabPage8->Name = L"metroTabPage8";
			this->metroTabPage8->Size = System::Drawing::Size(1038, 467);
			this->metroTabPage8->TabIndex = 0;
			this->metroTabPage8->Text = L"Çıkarma";
			this->metroTabPage8->VerticalScrollbarBarColor = true;
			this->metroTabPage8->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage8->VerticalScrollbarSize = 10;
			this->metroTabPage8->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage8_Click);
			this->metroTabPage8->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage8_Enter);
			// 
			// metroButton7
			// 
			this->metroButton7->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton7->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton7->Location = System::Drawing::Point(25, 12);
			this->metroButton7->Name = L"metroButton7";
			this->metroButton7->Size = System::Drawing::Size(111, 38);
			this->metroButton7->TabIndex = 22;
			this->metroButton7->Text = L"Heaspla";
			this->metroButton7->UseSelectable = true;
			this->metroButton7->Click += gcnew System::EventHandler(this, &MyForm::metroButton7_Click);
			// 
			// metroGrid9
			// 
			this->metroGrid9->AllowDrop = true;
			this->metroGrid9->AllowUserToAddRows = false;
			this->metroGrid9->AllowUserToDeleteRows = false;
			this->metroGrid9->AllowUserToResizeRows = false;
			this->metroGrid9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid9->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid9->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid9->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle25->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle25->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle25->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid9->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle25;
			this->metroGrid9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid9->ColumnHeadersVisible = false;
			this->metroGrid9->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle26->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle26->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle26->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle26->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid9->DefaultCellStyle = dataGridViewCellStyle26;
			this->metroGrid9->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->metroGrid9->EnableHeadersVisualStyles = false;
			this->metroGrid9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid9->GridColor = System::Drawing::Color::White;
			this->metroGrid9->Location = System::Drawing::Point(693, 60);
			this->metroGrid9->MultiSelect = false;
			this->metroGrid9->Name = L"metroGrid9";
			this->metroGrid9->ReadOnly = true;
			this->metroGrid9->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle27->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle27->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle27->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle27->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid9->RowHeadersDefaultCellStyle = dataGridViewCellStyle27;
			this->metroGrid9->RowHeadersVisible = false;
			this->metroGrid9->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle28->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle28->NullValue = nullptr;
			this->metroGrid9->RowsDefaultCellStyle = dataGridViewCellStyle28;
			this->metroGrid9->RowTemplate->Height = 40;
			this->metroGrid9->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid9->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid9->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid9->Size = System::Drawing::Size(315, 381);
			this->metroGrid9->TabIndex = 21;
			// 
			// metroGrid10
			// 
			this->metroGrid10->AllowDrop = true;
			this->metroGrid10->AllowUserToAddRows = false;
			this->metroGrid10->AllowUserToDeleteRows = false;
			this->metroGrid10->AllowUserToResizeRows = false;
			this->metroGrid10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid10->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid10->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid10->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle29->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle29->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle29->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid10->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle29;
			this->metroGrid10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid10->ColumnHeadersVisible = false;
			this->metroGrid10->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle30->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle30->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle30->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle30->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid10->DefaultCellStyle = dataGridViewCellStyle30;
			this->metroGrid10->EnableHeadersVisualStyles = false;
			this->metroGrid10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid10->GridColor = System::Drawing::Color::White;
			this->metroGrid10->Location = System::Drawing::Point(359, 60);
			this->metroGrid10->MultiSelect = false;
			this->metroGrid10->Name = L"metroGrid10";
			this->metroGrid10->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle31->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle31->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle31->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle31->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid10->RowHeadersDefaultCellStyle = dataGridViewCellStyle31;
			this->metroGrid10->RowHeadersVisible = false;
			this->metroGrid10->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle32->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle32->NullValue = nullptr;
			this->metroGrid10->RowsDefaultCellStyle = dataGridViewCellStyle32;
			this->metroGrid10->RowTemplate->Height = 40;
			this->metroGrid10->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid10->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid10->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid10->Size = System::Drawing::Size(315, 381);
			this->metroGrid10->TabIndex = 20;
			// 
			// metroGrid11
			// 
			this->metroGrid11->AllowDrop = true;
			this->metroGrid11->AllowUserToAddRows = false;
			this->metroGrid11->AllowUserToDeleteRows = false;
			this->metroGrid11->AllowUserToResizeRows = false;
			this->metroGrid11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid11->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid11->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid11->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle33->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle33->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle33->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid11->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle33;
			this->metroGrid11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid11->ColumnHeadersVisible = false;
			this->metroGrid11->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle34->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle34->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle34->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle34->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid11->DefaultCellStyle = dataGridViewCellStyle34;
			this->metroGrid11->EnableHeadersVisualStyles = false;
			this->metroGrid11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid11->GridColor = System::Drawing::Color::White;
			this->metroGrid11->Location = System::Drawing::Point(25, 60);
			this->metroGrid11->MultiSelect = false;
			this->metroGrid11->Name = L"metroGrid11";
			this->metroGrid11->ReadOnly = true;
			this->metroGrid11->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle35->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle35->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle35->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle35->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid11->RowHeadersDefaultCellStyle = dataGridViewCellStyle35;
			this->metroGrid11->RowHeadersVisible = false;
			this->metroGrid11->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle36->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle36->NullValue = nullptr;
			this->metroGrid11->RowsDefaultCellStyle = dataGridViewCellStyle36;
			this->metroGrid11->RowTemplate->Height = 40;
			this->metroGrid11->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid11->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid11->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid11->Size = System::Drawing::Size(315, 381);
			this->metroGrid11->TabIndex = 19;
			// 
			// metroTabPage9
			// 
			this->metroTabPage9->Controls->Add(this->numericUpDown3);
			this->metroTabPage9->Controls->Add(this->metroButton8);
			this->metroTabPage9->Controls->Add(this->metroGrid12);
			this->metroTabPage9->Controls->Add(this->metroGrid13);
			this->metroTabPage9->Controls->Add(this->metroGrid14);
			this->metroTabPage9->HorizontalScrollbarBarColor = true;
			this->metroTabPage9->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage9->HorizontalScrollbarSize = 10;
			this->metroTabPage9->Location = System::Drawing::Point(4, 38);
			this->metroTabPage9->Name = L"metroTabPage9";
			this->metroTabPage9->Size = System::Drawing::Size(1038, 467);
			this->metroTabPage9->TabIndex = 0;
			this->metroTabPage9->Text = L"Çarpma";
			this->metroTabPage9->VerticalScrollbarBarColor = true;
			this->metroTabPage9->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage9->VerticalScrollbarSize = 10;
			this->metroTabPage9->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage9_Click);
			this->metroTabPage9->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage9_Enter);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(359, 26);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->ReadOnly = true;
			this->numericUpDown3->Size = System::Drawing::Size(68, 24);
			this->numericUpDown3->TabIndex = 27;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// metroButton8
			// 
			this->metroButton8->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton8->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton8->Location = System::Drawing::Point(25, 12);
			this->metroButton8->Name = L"metroButton8";
			this->metroButton8->Size = System::Drawing::Size(111, 38);
			this->metroButton8->TabIndex = 26;
			this->metroButton8->Text = L"Heaspla";
			this->metroButton8->UseSelectable = true;
			this->metroButton8->Click += gcnew System::EventHandler(this, &MyForm::metroButton8_Click);
			// 
			// metroGrid12
			// 
			this->metroGrid12->AllowDrop = true;
			this->metroGrid12->AllowUserToAddRows = false;
			this->metroGrid12->AllowUserToDeleteRows = false;
			this->metroGrid12->AllowUserToResizeRows = false;
			this->metroGrid12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid12->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid12->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid12->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle37->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle37->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle37->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid12->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle37;
			this->metroGrid12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid12->ColumnHeadersVisible = false;
			this->metroGrid12->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle38->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle38->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle38->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle38->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid12->DefaultCellStyle = dataGridViewCellStyle38;
			this->metroGrid12->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->metroGrid12->EnableHeadersVisualStyles = false;
			this->metroGrid12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid12->GridColor = System::Drawing::Color::White;
			this->metroGrid12->Location = System::Drawing::Point(693, 60);
			this->metroGrid12->MultiSelect = false;
			this->metroGrid12->Name = L"metroGrid12";
			this->metroGrid12->ReadOnly = true;
			this->metroGrid12->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle39->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle39->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle39->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle39->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid12->RowHeadersDefaultCellStyle = dataGridViewCellStyle39;
			this->metroGrid12->RowHeadersVisible = false;
			this->metroGrid12->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle40->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle40->NullValue = nullptr;
			this->metroGrid12->RowsDefaultCellStyle = dataGridViewCellStyle40;
			this->metroGrid12->RowTemplate->Height = 40;
			this->metroGrid12->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid12->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid12->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid12->Size = System::Drawing::Size(315, 381);
			this->metroGrid12->TabIndex = 25;
			// 
			// metroGrid13
			// 
			this->metroGrid13->AllowDrop = true;
			this->metroGrid13->AllowUserToAddRows = false;
			this->metroGrid13->AllowUserToDeleteRows = false;
			this->metroGrid13->AllowUserToResizeRows = false;
			this->metroGrid13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid13->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid13->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid13->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle41->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle41->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle41->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid13->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle41;
			this->metroGrid13->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid13->ColumnHeadersVisible = false;
			this->metroGrid13->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle42->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle42->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle42->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle42->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid13->DefaultCellStyle = dataGridViewCellStyle42;
			this->metroGrid13->EnableHeadersVisualStyles = false;
			this->metroGrid13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid13->GridColor = System::Drawing::Color::White;
			this->metroGrid13->Location = System::Drawing::Point(359, 60);
			this->metroGrid13->MultiSelect = false;
			this->metroGrid13->Name = L"metroGrid13";
			this->metroGrid13->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle43->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle43->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle43->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle43->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid13->RowHeadersDefaultCellStyle = dataGridViewCellStyle43;
			this->metroGrid13->RowHeadersVisible = false;
			this->metroGrid13->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle44->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle44->NullValue = nullptr;
			this->metroGrid13->RowsDefaultCellStyle = dataGridViewCellStyle44;
			this->metroGrid13->RowTemplate->Height = 40;
			this->metroGrid13->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid13->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid13->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid13->Size = System::Drawing::Size(315, 381);
			this->metroGrid13->TabIndex = 24;
			this->metroGrid13->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid13_CellContentClick);
			// 
			// metroGrid14
			// 
			this->metroGrid14->AllowDrop = true;
			this->metroGrid14->AllowUserToAddRows = false;
			this->metroGrid14->AllowUserToDeleteRows = false;
			this->metroGrid14->AllowUserToResizeRows = false;
			this->metroGrid14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid14->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid14->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid14->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle45->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle45->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle45->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid14->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle45;
			this->metroGrid14->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid14->ColumnHeadersVisible = false;
			this->metroGrid14->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle46->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle46->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle46->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle46->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid14->DefaultCellStyle = dataGridViewCellStyle46;
			this->metroGrid14->EnableHeadersVisualStyles = false;
			this->metroGrid14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid14->GridColor = System::Drawing::Color::White;
			this->metroGrid14->Location = System::Drawing::Point(25, 60);
			this->metroGrid14->MultiSelect = false;
			this->metroGrid14->Name = L"metroGrid14";
			this->metroGrid14->ReadOnly = true;
			this->metroGrid14->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle47->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle47->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle47->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle47->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid14->RowHeadersDefaultCellStyle = dataGridViewCellStyle47;
			this->metroGrid14->RowHeadersVisible = false;
			this->metroGrid14->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle48->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle48->NullValue = nullptr;
			this->metroGrid14->RowsDefaultCellStyle = dataGridViewCellStyle48;
			this->metroGrid14->RowTemplate->Height = 40;
			this->metroGrid14->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid14->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid14->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid14->Size = System::Drawing::Size(315, 381);
			this->metroGrid14->TabIndex = 23;
			// 
			// metroTabPage1
			// 
			this->metroTabPage1->Controls->Add(this->metroTextBox3);
			this->metroTabPage1->Controls->Add(this->metroButton9);
			this->metroTabPage1->Controls->Add(this->metroGrid15);
			this->metroTabPage1->Controls->Add(this->metroGrid16);
			this->metroTabPage1->HorizontalScrollbarBarColor = true;
			this->metroTabPage1->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->HorizontalScrollbarSize = 10;
			this->metroTabPage1->Location = System::Drawing::Point(4, 38);
			this->metroTabPage1->Name = L"metroTabPage1";
			this->metroTabPage1->Size = System::Drawing::Size(1038, 467);
			this->metroTabPage1->TabIndex = 1;
			this->metroTabPage1->Text = L"Skaler Çarpma";
			this->metroTabPage1->VerticalScrollbarBarColor = true;
			this->metroTabPage1->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage1->VerticalScrollbarSize = 10;
			this->metroTabPage1->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage1_Click);
			this->metroTabPage1->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage1_Enter);
			// 
			// metroTextBox3
			// 
			// 
			// 
			// 
			this->metroTextBox3->CustomButton->Image = nullptr;
			this->metroTextBox3->CustomButton->Location = System::Drawing::Point(51, 1);
			this->metroTextBox3->CustomButton->Name = L"";
			this->metroTextBox3->CustomButton->Size = System::Drawing::Size(23, 23);
			this->metroTextBox3->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox3->CustomButton->TabIndex = 1;
			this->metroTextBox3->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox3->CustomButton->UseSelectable = true;
			this->metroTextBox3->CustomButton->Visible = false;
			this->metroTextBox3->Lines = gcnew cli::array< System::String^  >(1) { L"0" };
			this->metroTextBox3->Location = System::Drawing::Point(24, 25);
			this->metroTextBox3->MaxLength = 32767;
			this->metroTextBox3->Name = L"metroTextBox3";
			this->metroTextBox3->PasswordChar = '\0';
			this->metroTextBox3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox3->SelectedText = L"";
			this->metroTextBox3->SelectionLength = 0;
			this->metroTextBox3->SelectionStart = 0;
			this->metroTextBox3->ShortcutsEnabled = true;
			this->metroTextBox3->Size = System::Drawing::Size(75, 25);
			this->metroTextBox3->TabIndex = 30;
			this->metroTextBox3->Text = L"0";
			this->metroTextBox3->UseSelectable = true;
			this->metroTextBox3->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox3->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox3->Click += gcnew System::EventHandler(this, &MyForm::metroTextBox3_Click);
			this->metroTextBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::metroTextBox3_KeyPress);
			// 
			// metroButton9
			// 
			this->metroButton9->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton9->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton9->Location = System::Drawing::Point(463, 12);
			this->metroButton9->Name = L"metroButton9";
			this->metroButton9->Size = System::Drawing::Size(111, 38);
			this->metroButton9->TabIndex = 29;
			this->metroButton9->Text = L"Heaspla";
			this->metroButton9->UseSelectable = true;
			this->metroButton9->Click += gcnew System::EventHandler(this, &MyForm::metroButton9_Click);
			// 
			// metroGrid15
			// 
			this->metroGrid15->AllowDrop = true;
			this->metroGrid15->AllowUserToAddRows = false;
			this->metroGrid15->AllowUserToDeleteRows = false;
			this->metroGrid15->AllowUserToResizeRows = false;
			this->metroGrid15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid15->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid15->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid15->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle49->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle49->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle49->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid15->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle49;
			this->metroGrid15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid15->ColumnHeadersVisible = false;
			this->metroGrid15->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle50->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle50->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle50->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle50->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid15->DefaultCellStyle = dataGridViewCellStyle50;
			this->metroGrid15->EnableHeadersVisualStyles = false;
			this->metroGrid15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid15->GridColor = System::Drawing::Color::White;
			this->metroGrid15->Location = System::Drawing::Point(577, 56);
			this->metroGrid15->MultiSelect = false;
			this->metroGrid15->Name = L"metroGrid15";
			this->metroGrid15->ReadOnly = true;
			this->metroGrid15->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle51->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle51->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle51->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle51->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid15->RowHeadersDefaultCellStyle = dataGridViewCellStyle51;
			this->metroGrid15->RowHeadersVisible = false;
			this->metroGrid15->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle52->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle52->NullValue = nullptr;
			this->metroGrid15->RowsDefaultCellStyle = dataGridViewCellStyle52;
			this->metroGrid15->RowTemplate->Height = 40;
			this->metroGrid15->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid15->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid15->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid15->Size = System::Drawing::Size(442, 461);
			this->metroGrid15->TabIndex = 28;
			// 
			// metroGrid16
			// 
			this->metroGrid16->AllowDrop = true;
			this->metroGrid16->AllowUserToAddRows = false;
			this->metroGrid16->AllowUserToDeleteRows = false;
			this->metroGrid16->AllowUserToResizeRows = false;
			this->metroGrid16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid16->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid16->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid16->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle53->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle53->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle53->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid16->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle53;
			this->metroGrid16->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid16->ColumnHeadersVisible = false;
			this->metroGrid16->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle54->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle54->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle54->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle54->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle54->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid16->DefaultCellStyle = dataGridViewCellStyle54;
			this->metroGrid16->EnableHeadersVisualStyles = false;
			this->metroGrid16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid16->GridColor = System::Drawing::Color::White;
			this->metroGrid16->Location = System::Drawing::Point(24, 56);
			this->metroGrid16->MultiSelect = false;
			this->metroGrid16->Name = L"metroGrid16";
			this->metroGrid16->ReadOnly = true;
			this->metroGrid16->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle55->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle55->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle55->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle55->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid16->RowHeadersDefaultCellStyle = dataGridViewCellStyle55;
			this->metroGrid16->RowHeadersVisible = false;
			this->metroGrid16->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle56->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle56->NullValue = nullptr;
			this->metroGrid16->RowsDefaultCellStyle = dataGridViewCellStyle56;
			this->metroGrid16->RowTemplate->Height = 40;
			this->metroGrid16->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid16->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid16->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid16->Size = System::Drawing::Size(448, 461);
			this->metroGrid16->TabIndex = 27;
			this->metroGrid16->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid16_CellContentClick);
			// 
			// metroTabPage12
			// 
			this->metroTabPage12->Controls->Add(this->metroLabel8);
			this->metroTabPage12->Controls->Add(this->metroButton4);
			this->metroTabPage12->Controls->Add(this->metroGrid4);
			this->metroTabPage12->HorizontalScrollbarBarColor = true;
			this->metroTabPage12->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage12->HorizontalScrollbarSize = 10;
			this->metroTabPage12->Location = System::Drawing::Point(4, 38);
			this->metroTabPage12->Name = L"metroTabPage12";
			this->metroTabPage12->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage12->TabIndex = 3;
			this->metroTabPage12->Text = L"Ters";
			this->metroTabPage12->VerticalScrollbarBarColor = true;
			this->metroTabPage12->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage12->VerticalScrollbarSize = 10;
			this->metroTabPage12->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage12_Click);
			this->metroTabPage12->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage12_Enter);
			// 
			// metroLabel8
			// 
			this->metroLabel8->AutoSize = true;
			this->metroLabel8->Location = System::Drawing::Point(505, 244);
			this->metroLabel8->Name = L"metroLabel8";
			this->metroLabel8->Size = System::Drawing::Size(73, 20);
			this->metroLabel8->TabIndex = 22;
			this->metroLabel8->Text = L"Kare Degil";
			// 
			// metroButton4
			// 
			this->metroButton4->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton4->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton4->Location = System::Drawing::Point(15, 17);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(111, 38);
			this->metroButton4->TabIndex = 18;
			this->metroButton4->Text = L"Ana Matrisi Yap";
			this->metroButton4->UseSelectable = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &MyForm::metroButton4_Click);
			// 
			// metroGrid4
			// 
			this->metroGrid4->AllowDrop = true;
			this->metroGrid4->AllowUserToAddRows = false;
			this->metroGrid4->AllowUserToDeleteRows = false;
			this->metroGrid4->AllowUserToResizeRows = false;
			this->metroGrid4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid4->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid4->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid4->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle57->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle57->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle57->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle57;
			this->metroGrid4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid4->ColumnHeadersVisible = false;
			this->metroGrid4->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle58->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle58->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle58->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle58->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid4->DefaultCellStyle = dataGridViewCellStyle58;
			this->metroGrid4->EnableHeadersVisualStyles = false;
			this->metroGrid4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid4->GridColor = System::Drawing::Color::White;
			this->metroGrid4->Location = System::Drawing::Point(15, 69);
			this->metroGrid4->Name = L"metroGrid4";
			this->metroGrid4->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle59->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle59->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle59->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle59->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle59->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid4->RowHeadersDefaultCellStyle = dataGridViewCellStyle59;
			this->metroGrid4->RowHeadersVisible = false;
			this->metroGrid4->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle60->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle60->NullValue = nullptr;
			this->metroGrid4->RowsDefaultCellStyle = dataGridViewCellStyle60;
			this->metroGrid4->RowTemplate->Height = 40;
			this->metroGrid4->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid4->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid4->Size = System::Drawing::Size(1013, 425);
			this->metroGrid4->TabIndex = 16;
			// 
			// metroTabPage13
			// 
			this->metroTabPage13->Controls->Add(this->metroLabel5);
			this->metroTabPage13->Controls->Add(this->metroButton5);
			this->metroTabPage13->Controls->Add(this->metroGrid5);
			this->metroTabPage13->HorizontalScrollbarBarColor = true;
			this->metroTabPage13->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage13->HorizontalScrollbarSize = 10;
			this->metroTabPage13->Location = System::Drawing::Point(4, 38);
			this->metroTabPage13->Name = L"metroTabPage13";
			this->metroTabPage13->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage13->TabIndex = 4;
			this->metroTabPage13->Text = L"İndirgenmiş";
			this->metroTabPage13->VerticalScrollbarBarColor = true;
			this->metroTabPage13->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage13->VerticalScrollbarSize = 10;
			this->metroTabPage13->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage13_Click);
			this->metroTabPage13->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage13_Enter);
			// 
			// metroLabel5
			// 
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(475, 312);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(36, 20);
			this->metroLabel5->TabIndex = 21;
			this->metroLabel5->Text = L"YOK";
			// 
			// metroButton5
			// 
			this->metroButton5->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton5->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton5->Location = System::Drawing::Point(17, 21);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(111, 38);
			this->metroButton5->TabIndex = 19;
			this->metroButton5->Text = L"Ana Matrisi Yap";
			this->metroButton5->UseSelectable = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &MyForm::metroButton5_Click);
			// 
			// metroGrid5
			// 
			this->metroGrid5->AllowDrop = true;
			this->metroGrid5->AllowUserToAddRows = false;
			this->metroGrid5->AllowUserToDeleteRows = false;
			this->metroGrid5->AllowUserToResizeRows = false;
			this->metroGrid5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid5->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid5->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid5->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle61->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle61->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle61->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle61->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle61->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle61;
			this->metroGrid5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid5->ColumnHeadersVisible = false;
			this->metroGrid5->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle62->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle62->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle62->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle62->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle62->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid5->DefaultCellStyle = dataGridViewCellStyle62;
			this->metroGrid5->EnableHeadersVisualStyles = false;
			this->metroGrid5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid5->GridColor = System::Drawing::Color::White;
			this->metroGrid5->Location = System::Drawing::Point(17, 73);
			this->metroGrid5->Name = L"metroGrid5";
			this->metroGrid5->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle63->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle63->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle63->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle63->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle63->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle63->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid5->RowHeadersDefaultCellStyle = dataGridViewCellStyle63;
			this->metroGrid5->RowHeadersVisible = false;
			this->metroGrid5->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle64->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle64->NullValue = nullptr;
			this->metroGrid5->RowsDefaultCellStyle = dataGridViewCellStyle64;
			this->metroGrid5->RowTemplate->Height = 40;
			this->metroGrid5->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid5->Size = System::Drawing::Size(1013, 425);
			this->metroGrid5->TabIndex = 20;
			this->metroGrid5->Visible = false;
			// 
			// metroTabPage14
			// 
			this->metroTabPage14->Controls->Add(this->metroLabel10);
			this->metroTabPage14->Controls->Add(this->numericUpDown5);
			this->metroTabPage14->Controls->Add(this->metroGrid19);
			this->metroTabPage14->Controls->Add(this->metroGrid18);
			this->metroTabPage14->Controls->Add(this->metroButton11);
			this->metroTabPage14->Controls->Add(this->numericUpDown4);
			this->metroTabPage14->Controls->Add(this->metroGrid17);
			this->metroTabPage14->Controls->Add(this->metroLabel9);
			this->metroTabPage14->HorizontalScrollbarBarColor = true;
			this->metroTabPage14->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage14->HorizontalScrollbarSize = 10;
			this->metroTabPage14->Location = System::Drawing::Point(4, 38);
			this->metroTabPage14->Name = L"metroTabPage14";
			this->metroTabPage14->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage14->TabIndex = 5;
			this->metroTabPage14->Text = L"Denklem Çözmek";
			this->metroTabPage14->VerticalScrollbarBarColor = true;
			this->metroTabPage14->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage14->VerticalScrollbarSize = 10;
			this->metroTabPage14->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage14_Click);
			this->metroTabPage14->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage14_Enter);
			// 
			// metroLabel10
			// 
			this->metroLabel10->AutoSize = true;
			this->metroLabel10->Location = System::Drawing::Point(112, 3);
			this->metroLabel10->Name = L"metroLabel10";
			this->metroLabel10->Size = System::Drawing::Size(104, 20);
			this->metroLabel10->TabIndex = 25;
			this->metroLabel10->Text = L"Değişken Sayısı";
			this->metroLabel10->Click += gcnew System::EventHandler(this, &MyForm::metroLabel10_Click);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(112, 29);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->ReadOnly = true;
			this->numericUpDown5->Size = System::Drawing::Size(104, 24);
			this->numericUpDown5->TabIndex = 24;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown5_ValueChanged);
			// 
			// metroGrid19
			// 
			this->metroGrid19->AllowDrop = true;
			this->metroGrid19->AllowUserToAddRows = false;
			this->metroGrid19->AllowUserToDeleteRows = false;
			this->metroGrid19->AllowUserToResizeRows = false;
			this->metroGrid19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid19->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid19->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid19->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle65->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle65->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle65->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle65->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid19->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle65;
			this->metroGrid19->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid19->ColumnHeadersVisible = false;
			this->metroGrid19->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle66->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle66->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle66->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle66->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid19->DefaultCellStyle = dataGridViewCellStyle66;
			this->metroGrid19->EnableHeadersVisualStyles = false;
			this->metroGrid19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid19->GridColor = System::Drawing::Color::White;
			this->metroGrid19->Location = System::Drawing::Point(112, 431);
			this->metroGrid19->MultiSelect = false;
			this->metroGrid19->Name = L"metroGrid19";
			this->metroGrid19->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle67->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle67->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle67->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle67->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle67->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle67->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid19->RowHeadersDefaultCellStyle = dataGridViewCellStyle67;
			this->metroGrid19->RowHeadersVisible = false;
			this->metroGrid19->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle68->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle68->NullValue = nullptr;
			this->metroGrid19->RowsDefaultCellStyle = dataGridViewCellStyle68;
			this->metroGrid19->RowTemplate->Height = 40;
			this->metroGrid19->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid19->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid19->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid19->Size = System::Drawing::Size(782, 60);
			this->metroGrid19->TabIndex = 22;
			// 
			// metroGrid18
			// 
			this->metroGrid18->AllowDrop = true;
			this->metroGrid18->AllowUserToAddRows = false;
			this->metroGrid18->AllowUserToDeleteRows = false;
			this->metroGrid18->AllowUserToResizeRows = false;
			this->metroGrid18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid18->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid18->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid18->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle69->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle69->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle69->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle69->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid18->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle69;
			this->metroGrid18->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid18->ColumnHeadersVisible = false;
			this->metroGrid18->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle70->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle70->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle70->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle70->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle70->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle70->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid18->DefaultCellStyle = dataGridViewCellStyle70;
			this->metroGrid18->EnableHeadersVisualStyles = false;
			this->metroGrid18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid18->GridColor = System::Drawing::Color::White;
			this->metroGrid18->Location = System::Drawing::Point(918, 63);
			this->metroGrid18->MultiSelect = false;
			this->metroGrid18->Name = L"metroGrid18";
			this->metroGrid18->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle71->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle71->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle71->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle71->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle71->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle71->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid18->RowHeadersDefaultCellStyle = dataGridViewCellStyle71;
			this->metroGrid18->RowHeadersVisible = false;
			this->metroGrid18->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle72->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle72->NullValue = nullptr;
			this->metroGrid18->RowsDefaultCellStyle = dataGridViewCellStyle72;
			this->metroGrid18->RowTemplate->Height = 40;
			this->metroGrid18->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid18->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid18->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid18->Size = System::Drawing::Size(114, 362);
			this->metroGrid18->TabIndex = 21;
			// 
			// metroButton11
			// 
			this->metroButton11->FontSize = MetroFramework::MetroButtonSize::Medium;
			this->metroButton11->FontWeight = MetroFramework::MetroButtonWeight::Regular;
			this->metroButton11->Location = System::Drawing::Point(918, 12);
			this->metroButton11->Name = L"metroButton11";
			this->metroButton11->Size = System::Drawing::Size(114, 38);
			this->metroButton11->TabIndex = 20;
			this->metroButton11->Text = L"Hesapla";
			this->metroButton11->UseSelectable = true;
			this->metroButton11->Click += gcnew System::EventHandler(this, &MyForm::metroButton11_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(3, 63);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->ReadOnly = true;
			this->numericUpDown4->Size = System::Drawing::Size(102, 24);
			this->numericUpDown4->TabIndex = 18;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// metroGrid17
			// 
			this->metroGrid17->AllowDrop = true;
			this->metroGrid17->AllowUserToAddRows = false;
			this->metroGrid17->AllowUserToDeleteRows = false;
			this->metroGrid17->AllowUserToResizeRows = false;
			this->metroGrid17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid17->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid17->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid17->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle73->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle73->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle73->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle73->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle73->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid17->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle73;
			this->metroGrid17->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid17->ColumnHeadersVisible = false;
			this->metroGrid17->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle74->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle74->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle74->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle74->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle74->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle74->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid17->DefaultCellStyle = dataGridViewCellStyle74;
			this->metroGrid17->EnableHeadersVisualStyles = false;
			this->metroGrid17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid17->GridColor = System::Drawing::Color::White;
			this->metroGrid17->Location = System::Drawing::Point(112, 63);
			this->metroGrid17->MultiSelect = false;
			this->metroGrid17->Name = L"metroGrid17";
			this->metroGrid17->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle75->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle75->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle75->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle75->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle75->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle75->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid17->RowHeadersDefaultCellStyle = dataGridViewCellStyle75;
			this->metroGrid17->RowHeadersVisible = false;
			this->metroGrid17->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle76->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle76->NullValue = nullptr;
			this->metroGrid17->RowsDefaultCellStyle = dataGridViewCellStyle76;
			this->metroGrid17->RowTemplate->Height = 40;
			this->metroGrid17->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid17->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid17->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid17->Size = System::Drawing::Size(782, 362);
			this->metroGrid17->TabIndex = 19;
			this->metroGrid17->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::metroGrid17_CellContentClick);
			// 
			// metroLabel9
			// 
			this->metroLabel9->AutoSize = true;
			this->metroLabel9->Location = System::Drawing::Point(3, 90);
			this->metroLabel9->Name = L"metroLabel9";
			this->metroLabel9->Size = System::Drawing::Size(102, 20);
			this->metroLabel9->TabIndex = 23;
			this->metroLabel9->Text = L"Denklem Sayısı";
			this->metroLabel9->Click += gcnew System::EventHandler(this, &MyForm::metroLabel9_Click);
			// 
			// metroTabPage15
			// 
			this->metroTabPage15->Controls->Add(this->metroGrid20);
			this->metroTabPage15->Controls->Add(this->metroLabel7);
			this->metroTabPage15->Controls->Add(this->metroComboBox1);
			this->metroTabPage15->HorizontalScrollbarBarColor = true;
			this->metroTabPage15->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage15->HorizontalScrollbarSize = 10;
			this->metroTabPage15->Location = System::Drawing::Point(4, 38);
			this->metroTabPage15->Name = L"metroTabPage15";
			this->metroTabPage15->Size = System::Drawing::Size(1046, 509);
			this->metroTabPage15->TabIndex = 6;
			this->metroTabPage15->Text = L"Öz Değerler";
			this->metroTabPage15->VerticalScrollbarBarColor = true;
			this->metroTabPage15->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage15->VerticalScrollbarSize = 10;
			this->metroTabPage15->Click += gcnew System::EventHandler(this, &MyForm::metroTabPage15_Click);
			this->metroTabPage15->Enter += gcnew System::EventHandler(this, &MyForm::metroTabPage15_Enter);
			// 
			// metroGrid20
			// 
			this->metroGrid20->AllowDrop = true;
			this->metroGrid20->AllowUserToAddRows = false;
			this->metroGrid20->AllowUserToDeleteRows = false;
			this->metroGrid20->AllowUserToResizeRows = false;
			this->metroGrid20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->metroGrid20->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->metroGrid20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->metroGrid20->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->metroGrid20->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle77->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle77->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle77->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle77->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle77->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->metroGrid20->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle77;
			this->metroGrid20->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->metroGrid20->ColumnHeadersVisible = false;
			this->metroGrid20->Cursor = System::Windows::Forms::Cursors::Arrow;
			dataGridViewCellStyle78->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)));
			dataGridViewCellStyle78->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle78->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(136)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle78->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(126)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			dataGridViewCellStyle78->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle78->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid20->DefaultCellStyle = dataGridViewCellStyle78;
			this->metroGrid20->EnableHeadersVisualStyles = false;
			this->metroGrid20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->metroGrid20->GridColor = System::Drawing::Color::White;
			this->metroGrid20->Location = System::Drawing::Point(3, 65);
			this->metroGrid20->MultiSelect = false;
			this->metroGrid20->Name = L"metroGrid20";
			this->metroGrid20->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle79->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle79->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			dataGridViewCellStyle79->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			dataGridViewCellStyle79->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			dataGridViewCellStyle79->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(247)));
			dataGridViewCellStyle79->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)));
			dataGridViewCellStyle79->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->metroGrid20->RowHeadersDefaultCellStyle = dataGridViewCellStyle79;
			this->metroGrid20->RowHeadersVisible = false;
			this->metroGrid20->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle80->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle80->NullValue = nullptr;
			this->metroGrid20->RowsDefaultCellStyle = dataGridViewCellStyle80;
			this->metroGrid20->RowTemplate->Height = 40;
			this->metroGrid20->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->metroGrid20->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->metroGrid20->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->metroGrid20->Size = System::Drawing::Size(225, 424);
			this->metroGrid20->TabIndex = 14;
			// 
			// metroLabel7
			// 
			this->metroLabel7->AutoSize = true;
			this->metroLabel7->Location = System::Drawing::Point(452, 253);
			this->metroLabel7->Name = L"metroLabel7";
			this->metroLabel7->Size = System::Drawing::Size(86, 20);
			this->metroLabel7->TabIndex = 3;
			this->metroLabel7->Text = L"metroLabel7";
			// 
			// metroComboBox1
			// 
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 24;
			this->metroComboBox1->Location = System::Drawing::Point(3, 16);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(225, 30);
			this->metroComboBox1->TabIndex = 2;
			this->metroComboBox1->UseSelectable = true;
			this->metroComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::metroComboBox1_SelectedIndexChanged);
			// 
			// metroTabPage10
			// 
			this->metroTabPage10->HorizontalScrollbarBarColor = true;
			this->metroTabPage10->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage10->HorizontalScrollbarSize = 10;
			this->metroTabPage10->Location = System::Drawing::Point(0, 0);
			this->metroTabPage10->Name = L"metroTabPage10";
			this->metroTabPage10->Size = System::Drawing::Size(200, 100);
			this->metroTabPage10->TabIndex = 0;
			this->metroTabPage10->Text = L"Skaler Çarpma";
			this->metroTabPage10->VerticalScrollbarBarColor = true;
			this->metroTabPage10->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage10->VerticalScrollbarSize = 10;
			// 
			// metroTabPage11
			// 
			this->metroTabPage11->HorizontalScrollbarBarColor = true;
			this->metroTabPage11->HorizontalScrollbarHighlightOnWheel = false;
			this->metroTabPage11->HorizontalScrollbarSize = 10;
			this->metroTabPage11->Location = System::Drawing::Point(0, 0);
			this->metroTabPage11->Name = L"metroTabPage11";
			this->metroTabPage11->Size = System::Drawing::Size(200, 100);
			this->metroTabPage11->TabIndex = 0;
			this->metroTabPage11->Text = L"Ters";
			this->metroTabPage11->VerticalScrollbarBarColor = true;
			this->metroTabPage11->VerticalScrollbarHighlightOnWheel = false;
			this->metroTabPage11->VerticalScrollbarSize = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 631);
			this->Controls->Add(this->metroTabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Style = MetroFramework::MetroColorStyle::Orange;
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->metroTabControl1->ResumeLayout(false);
			this->metroTabPage2->ResumeLayout(false);
			this->metroTabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid3))->EndInit();
			this->metroTabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid1))->EndInit();
			this->metroTabPage4->ResumeLayout(false);
			this->metroTabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid2))->EndInit();
			this->metroTabPage5->ResumeLayout(false);
			this->metroTabControl2->ResumeLayout(false);
			this->metroTabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid6))->EndInit();
			this->metroTabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid11))->EndInit();
			this->metroTabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid14))->EndInit();
			this->metroTabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid16))->EndInit();
			this->metroTabPage12->ResumeLayout(false);
			this->metroTabPage12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid4))->EndInit();
			this->metroTabPage13->ResumeLayout(false);
			this->metroTabPage13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid5))->EndInit();
			this->metroTabPage14->ResumeLayout(false);
			this->metroTabPage14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid17))->EndInit();
			this->metroTabPage15->ResumeLayout(false);
			this->metroTabPage15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->metroGrid20))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroGrid1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void mt_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void metroTabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void metroGrid3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void metroGrid3_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
	}
			 //Columns
	private: System::Void numericUpDown2_ValueChanged_2(System::Object^  sender, System::EventArgs^  e) {
		int c = C, r = R;
		matrix mat(R, C);
		get_data_from_grid(r, c, metroGrid3, mat.mymatrix);;
		
		change(r, c, metroGrid3, mat.mymatrix);
		a = 0;
		s = 0;
		m = 0;
		mn = 0;
		
	}
			 //Rows
	private: System::Void numericUpDown1_ValueChanged_2(System::Object^  sender, System::EventArgs^  e) {
		int c = C, r = R;
		matrix mat(R, C);
		get_data_from_grid(r, c, metroGrid3, mat.mymatrix);
		change(r, c, metroGrid3, mat.mymatrix);
		a = 0;
		s = 0;
		m = 0;
		mn = 0;
	}
	private: System::Void metroTabPage2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void metroTextBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTextBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTabPage5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTabPage5_Enter(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void metroGrid1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
			 //making the transpose the main matrix
	private: System::Void metroButton2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (R == C)
		{
			matrix mat(R, C);
			get_data_from_grid(R, C, metroGrid1, mat.mymatrix);
			change(R, C, metroGrid3, mat.mymatrix);
		}
		else
		{
			matrix mat(C, R);
			get_data_from_grid(C, R, metroGrid1, mat.mymatrix);
			int t;
			t = R;
			numericUpDown1->Value = C;
			numericUpDown2->Value = t;
			change(R, C, metroGrid3, mat.mymatrix);
		}
	}
			 //making the I matrix the main matrix
	private: System::Void metroButton3_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid2, mat.mymatrix);
		change(R, C, metroGrid3, mat.mymatrix);
	}
			 // change the grid according to the new dimns
	public: void change(int r, int c, MetroGrid^ grid, double **t_matrix)
	{
		grid->Columns->Clear();
		grid->Rows->Clear();
		for (int i = 0; i < c; i++) {
			grid->Columns->Add("R", Convert::ToString(i));
			grid->Columns[i]->Width = width;
		}
		for (int i = 0; i < r; i++) {
			grid->Rows->Add();
			grid->Rows[i]->Height = height;
		}
		write_data_to_grid(r, c, grid, t_matrix);
	}
	public: void get_data_from_grid(int r, int c, MetroGrid^ grid, double **t_matrix)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++) {
				try {
					// for non numerical chars
					t_matrix[i][j] = Convert::ToDouble(grid->Rows[i]->Cells[j]->Value);
				}
				catch (...)
				{
					t_matrix[i][j] = 0;
				}
			}
	}
	public: void write_data_to_grid(int r, int c, MetroGrid^ grid, double **t_matrix) {
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++) grid->Rows[i]->Cells[j]->Value = Convert::ToString(t_matrix[i][j]);

	}
			//DELETE IT
	public: void fix_rows(int r, int c, double **t_matrix) {
		// fix the rows
		for (int i = r-1; i < r; i++)
			for (int j = 0; j < c; j++)
				t_matrix[i][j] = 0;
	}
			//DELETE IT
	public: void fix_colms(int r, int c, double **t_matrix) {
		// fix the colms
		for (int i = c-1; i < c; i++)
			for (int j = 0; j < r; j++)
				t_matrix[j][i] = 0;
	}
			// all elementns =0
	public: void clr_matris(double **t_matrix) {
		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++)
				t_matrix[i][j] = 0;
	}

	private: System::Void metroTabPage3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
			 //finding the transpose
	private: System::Void metroTabPage3_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (R == C)
		{
			matrix mat(R, C);
			get_data_from_grid(C, C, metroGrid3, mat.mymatrix);
			mat.transpose(C);
			change(R, C, metroGrid1, mat.pro_matrix);
		}
		else
		{
			matrix mat(R, C);
			matrix t(C, R);
			get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
			t.B = mat.f_transpose(R, C, mat.mymatrix);
			change(C, R, metroGrid1, t.B);
		}
	}

	private: System::Void metroTabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //finding the I matrix
	private: System::Void metroTabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (R == C)
		{
			matrix mat(R, C);
			metroGrid2->Show();
			metroLabel6->Hide();
			metroButton3->Show();
			mat.identity_matrix(C, mat.mymatrix);
			change(C, C, metroGrid2, mat.mymatrix);
		}
		else
		{
			metroGrid2->Hide();
			metroButton3->Hide();
			metroLabel6->Show();
		}
	}
	private: System::Void metroTabPage13_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //finding the RREF 
	private: System::Void metroTabPage13_Enter(System::Object^  sender, System::EventArgs^  e) {
			metroGrid5->Show();
			metroLabel5->Hide();
			matrix mat(R, C);
			get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
			mat.check_zeros(mat.mymatrix, R, C);
			mat.reform_mat(mat.mymatrix,R,C,0,0);
			mat.redu_mat(R, C, mat.mymatrix);
			change(R, C, metroGrid5, mat.mymatrix);
	}
			 //random 
	private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		mat.rand_m(R, C);
		write_data_to_grid(R, C, metroGrid3, mat.mymatrix);
	}
	private: System::Void metroTabPage7_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTabPage7_Enter(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		if (a == 0)
		{

			change(R, C, metroGrid6, mat.mymatrix);
			clr_matris(mat.pro_matrix);
			clr_matris(mat.res_matrix);
			change(R, C, metroGrid7, mat.pro_matrix);
			change(R, C, metroGrid8, mat.res_matrix);
			a++;
		}
		else
		{
			get_data_from_grid(R, C, metroGrid7, mat.pro_matrix);
			get_data_from_grid(R, C, metroGrid8, mat.res_matrix);
			change(R, C, metroGrid6, mat.mymatrix);
			change(R, C, metroGrid7, mat.pro_matrix);
			change(R, C, metroGrid8, mat.res_matrix);
		}
	}
			 //adding + code
	private: System::Void metroButton6_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		try {
			get_data_from_grid(R, C, metroGrid7, mat.pro_matrix);
			clr_matris(mat.res_matrix);
			mat.add_m(R, R);
			change(R, C, metroGrid8, mat.res_matrix);
		}
		catch (...) {
			change(R, C, metroGrid6, mat.mymatrix);
			clr_matris(mat.pro_matrix);
			clr_matris(mat.res_matrix);
			change(R, C, metroGrid7, mat.pro_matrix);
			change(R, C, metroGrid8, mat.res_matrix);
			a++;
			mat.add_m(R, R);
			change(R, C, metroGrid8, mat.res_matrix);
		}

	}
	private: System::Void metroTabPage8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTabPage8_Enter(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		if (s == 0)
		{
			change(R, C, metroGrid11, mat.mymatrix);
			clr_matris(mat.pro_matrix);
			clr_matris(mat.res_matrix);
			change(R, C, metroGrid10, mat.pro_matrix);
			change(R, C, metroGrid9, mat.res_matrix);
			s++;
		}
		else
		{
			get_data_from_grid(R, C, metroGrid10, mat.pro_matrix);
			get_data_from_grid(R, C, metroGrid9, mat.res_matrix);
			change(R, C, metroGrid11, mat.mymatrix);
			change(R, C, metroGrid10, mat.pro_matrix);
			change(R, C, metroGrid9, mat.res_matrix);
		}
	}
			 // sub - code
	private: System::Void metroButton7_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		try {
			get_data_from_grid(R, C, metroGrid10, mat.pro_matrix);
			clr_matris(mat.res_matrix);
			mat.sub_m(R, R);
			change(R, C, metroGrid9, mat.res_matrix);
		}
		catch (...) {
			change(R, C, metroGrid11, mat.mymatrix);
			clr_matris(mat.pro_matrix);
			clr_matris(mat.res_matrix);
			change(R, C, metroGrid10, mat.pro_matrix);
			change(R, C, metroGrid9, mat.res_matrix);
			s++;
			mat.sub_m(R, R);
			change(R, C, metroGrid9, mat.res_matrix);
		}
	}
	private: System::Void metroGrid13_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void metroTabPage9_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //DELETE IT
	private: void temp_clr(int r, int c, double **t_matrix)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				t_matrix[i][j] = 0;
	}
			  
	private: System::Void metroTabPage9_Enter(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C, (int)numericUpDown3->Value);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		if (m == 0)
		{
			change(R, C, metroGrid14, mat.mymatrix);
			temp_clr(C, (int)numericUpDown3->Value,mat.pro_matrix);
			temp_clr(R, (int)numericUpDown3->Value,mat.res_matrix);
			change(C, (int)numericUpDown3->Value, metroGrid13, mat.pro_matrix);
			change(R, (int)numericUpDown3->Value, metroGrid12, mat.res_matrix);
			m++;
		}
		else
		{
			get_data_from_grid(C, (int)numericUpDown3->Value, metroGrid13, mat.pro_matrix);
			get_data_from_grid(R, (int)numericUpDown3->Value, metroGrid12, mat.res_matrix);
			change(R, C, metroGrid14, mat.mymatrix);
			change(C, (int)numericUpDown3->Value, metroGrid13, mat.pro_matrix);
			change(R, (int)numericUpDown3->Value, metroGrid12, mat.res_matrix);
		}
	}
			 //columns for the mul. matrix
	private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C,(int)numericUpDown3->Value);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		int c = (int)numericUpDown3->Value, r = C;
		get_data_from_grid(r, c - 1, metroGrid13, mat.pro_matrix);
		fix_colms(r, c, mat.pro_matrix);
		temp_clr(R, (int)numericUpDown3->Value, mat.res_matrix);
		change(r, c, metroGrid13, mat.pro_matrix);
		change(R, c, metroGrid12, mat.res_matrix);
	}
			 // multiplying * code
	private: System::Void metroButton8_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C, (int)numericUpDown3->Value);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		try {
			get_data_from_grid(C, (int)numericUpDown3->Value, metroGrid13, mat.pro_matrix);
			get_data_from_grid(C, (int)numericUpDown3->Value, metroGrid13, mat.res_matrix);
			mat.mul_m(R, (int)numericUpDown3->Value, C);
			change(R, (int)numericUpDown3->Value, metroGrid12, mat.res_matrix);
		}
		catch (...) {
			change(R, C, metroGrid14, mat.mymatrix);
			change(C, (int)numericUpDown3->Value, metroGrid13, mat.pro_matrix);
			change(R, (int)numericUpDown3->Value, metroGrid12, mat.res_matrix);
			m++;
			mat.mul_m(R, (int)numericUpDown3->Value, C);
			change(R, (int)numericUpDown3->Value, metroGrid12, mat.res_matrix);
		}
	}
	private: System::Void metroGrid16_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void metroTabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		if (mn == 0)
		{
			change(R, C, metroGrid16, mat.mymatrix);
			clr_matris(mat.pro_matrix);
			change(R, C, metroGrid15, mat.pro_matrix);
			mn++;
		}
		else
		{
			get_data_from_grid(R, C, metroGrid15, mat.pro_matrix);
			change(R, C, metroGrid16, mat.mymatrix);
			change(R, C, metroGrid15, mat.pro_matrix);
		}

	}
			 // multiplying bu a num  *n code
	private: System::Void metroButton9_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		try {
			get_data_from_grid(R, C, metroGrid15, mat.pro_matrix);
			mat.mul_bn_m(R, R, Convert::ToDouble(metroTextBox3->Text));
			change(R, C, metroGrid15, mat.pro_matrix);
		}
		catch (...) {
			change(R, C, metroGrid16, mat.mymatrix);
			clr_matris(mat.pro_matrix);
			change(R, C, metroGrid15, mat.pro_matrix);
			mn++;
			try {
				mat.mul_bn_m(R, R, Convert::ToDouble(metroTextBox3->Text));
			}
			catch (...)
			{
				metroTextBox3->Text = "1";
				mat.mul_bn_m(R, R, 1);
			}
			mat.mul_bn_m(R, R, Convert::ToDouble(metroTextBox3->Text));
			change(R, C, metroGrid15, mat.pro_matrix);
		}
	}
	private: System::Void metroTextBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroTextBox3_KeyPress(Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Char::IsLetter(e->KeyChar)) { e->Handled = 1; return; }
	}
	private: System::Void metroTabPage12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 //finding the Inverse
	private: System::Void metroTabPage12_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (R == C)
		{
			matrix mat(R, C);
			get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
			double det = mat.det_Matrix(mat.mymatrix, R);
			if (det != 0)
			{
				double**i_matrix;
				i_matrix = new double*[R];
				if (R)
				{
					i_matrix[0] = new double[R * C];
					for (int i = 1; i < R; ++i)
						i_matrix[i] = i_matrix[0] + i * C;
				}
				mat.clr(R, C, i_matrix);
				metroGrid4->Show();
				metroLabel8->Hide();
				metroButton4->Show();
				mat.identity_matrix(C, i_matrix);
				mat.redu_mat(R, C, mat.mymatrix, i_matrix);
				change(R, C, metroGrid4, i_matrix);

			}
			else
			{
				metroButton4->Hide();
				metroGrid4->Hide();
				metroLabel8->Show();
				metroLabel8->Text="Determinant = 0 !!, Ters Yok";
			}
		}
		else
		{
			metroGrid4->Hide();
			metroLabel8->Show();
		}
	}
			 //calculating the rank and det
	private: System::Void metroButton10_Click(System::Object^  sender, System::EventArgs^  e) {
		matrix mat(R, C);
		get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
		mat.check_zeros(mat.mymatrix, R, C);
		mat.reform_mat(mat.mymatrix, R, C, 0, 0);
		mat.redu_mat(R, C, mat.mymatrix);
		int rank = mat.rank(mat.mymatrix,R,C);
		metroTextBox2->Text = Convert::ToString(rank);
		if (R == C)
		{
			get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
			double det = mat.det_Matrix(mat.mymatrix,R);
			metroTextBox1->Text = Convert::ToString(det);
		}
		else
		{
			metroTextBox1->Text = "Kare Degil";
		}
	}
			 //changing the dimns of the equ.
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	int r = (int) numericUpDown4->Value;
	int c = (int)numericUpDown5->Value;
	matrix mat(r, c);
	//matrix mat1(r, 1);
	change_eq(r, c, metroGrid17, mat.mymatrix);
	change(r, 1, metroGrid18, mat.mymatrix);
	change(1, c, metroGrid19, mat.mymatrix);
}
		 //changing the dimns of the equ.
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {	
	int r = (int)numericUpDown4->Value;
	int c = (int)numericUpDown5->Value;
	matrix mat(r, c);
	//matrix mat1(r, 1);
	change_eq(r, c, metroGrid17, mat.mymatrix);
	change(r, 1, metroGrid18, mat.mymatrix);
	change(1, c, metroGrid19, mat.mymatrix);

}
public: void change_eq(int r, int c, MetroGrid^ grid, double **t_matrix)
		 {
			 grid->Columns->Clear();
			 grid->Rows->Clear();
			 for (int i = 0; i < c*2; i++) {
				 grid->Columns->Add("R", Convert::ToString(i));
				 grid->Columns[i]->Width = width;
			 }
			 for (int i = 0; i < r; i++) {
				 grid->Rows->Add();
				 grid->Rows[i]->Height = height;
			 }
			 write_data_to_grid_eq(r, c, grid, t_matrix);
		 }
public: void write_data_to_grid_eq(int r, int c, MetroGrid^ grid, double **t_matrix) {
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c*2; j++)
			if(j%2==0) 
				grid->Rows[i]->Cells[j]->Value = Convert::ToString(t_matrix[i][j/2]);
			else { grid->Rows[i]->Cells[j]->Value = "x" + Convert::ToString(j / 2 + 1); 
			grid->Rows[i]->Cells[j]->ReadOnly = 1;
			grid->Columns[j]->Width = 20;
			}
}
public: void get_data_from_grid_eq(int r, int c, MetroGrid^ grid, MetroGrid^ grid1, double **t_matrix)
{
	for (int i = 0; i < r; i++)
	{
		try {
			t_matrix[i][c] = Convert::ToDouble(grid1->Rows[i]->Cells[0]->Value);
		}
		catch (...)
		{
			t_matrix[i][c] = 0;
		}
		
		for (int j = 0; j < c; j++) {
			try {
				t_matrix[i][j] = Convert::ToDouble(grid->Rows[i]->Cells[j * 2]->Value);
			}
			catch (...)
			{
				t_matrix[i][j] = 0;
			}
		}
	}
}
		//calculating the roots of the system
private: System::Void metroButton11_Click(System::Object^  sender, System::EventArgs^  e) {
	int res=2;
	int r = (int)numericUpDown4->Value;
	int c = (int)numericUpDown5->Value;
	matrix mat(r, c+1);
	get_data_from_grid_eq(r, c, metroGrid17, metroGrid18, mat.mymatrix);
	//mat.check_zeros(mat.mymatrix, r, c+1);
	//mat.reform_mat(mat.mymatrix, r, c+1, 0, 0);
	mat.redu_mat(r, c + 1, mat.mymatrix);
	//res = mat.check_zeros(mat.mymatrix, r, c + 1);
	if (res == 0)
	{
		MetroFramework::MetroMessageBox::Show(this,"Cozum kumesi yok");
	}
	else if (res == 1)
	{
		MetroFramework::MetroMessageBox::Show(this,"Sonsuz sayida cozum var");
	}
	else {
		for (int i = 0; i < c; i++)
		{
			try
			{
				metroGrid19->Rows[0]->Cells[i]->Value = Convert::ToString(mat.mymatrix[i][r]);
			}
			catch (...)
			{
				MetroFramework::MetroMessageBox::Show(this, "denklem sayisi cok az");
			}
		}
			
	}
		
}
private: System::Void metroGrid17_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void metroTabPage14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void metroTabPage14_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void metroTabPage15_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 //finding the eiginvalues
private: System::Void metroTabPage15_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (R == C)
	{
		if (R < 4)
		{
			
			metroComboBox1->Items->Clear();
			metroLabel7->Hide();
			matrix mat(R, C);
			get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
			double* values;
			values = new double[R];
			values = mat.eigenvalue(mat.mymatrix, R	);
			int j = 0;
			for (int i = 0; i < R; i++)
			{
				bool is_integer = (values[i] == Convert::ToInt16(values[i]));
				if (is_integer)
				{
					metroComboBox1->Items->Add(sender);
					metroComboBox1->Items[j] = Convert::ToString(values[i]);
					j++;
				}
			}
				
			
		}
		else
		{
			metroLabel7->Show();
			metroLabel7->Text = "boyutlar 3ten buyuk";
		}
	}
	else
	{
		metroLabel7->Show();
		metroLabel7->Text = "kare degil!";
	}
}
		 //making the inverse the main matrix
private: System::Void metroButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	matrix mat(R, C);
	get_data_from_grid(R, C, metroGrid4, mat.mymatrix);
	change(R, C, metroGrid3, mat.mymatrix);
}
		 //making the RREF the main matrix 
private: System::Void metroButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	matrix mat(R, C);
	get_data_from_grid(R, C, metroGrid5, mat.mymatrix);
	change(R, C, metroGrid3, mat.mymatrix);
}
private: System::Void metroGrid8_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void metroLabel9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void metroLabel10_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void metroButton12_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void metroComboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	matrix mat(R, C);
	int la = Convert::ToInt16(metroComboBox1->SelectedItem);
	get_data_from_grid(R, C, metroGrid3, mat.mymatrix);
	mat.identity_matrix(R, mat.pro_matrix);
	mat.mul_bn_my(R, C, la);
	mat.sub_my(R, C);
	mat.check_zeros(mat.res_matrix, R, C);
	mat.reform_mat(mat.res_matrix, R, C, 0, 0);
	mat.redu_mat(R, C, mat.res_matrix);
	double** vector;
	vector = new double*[3];
	if (3)
	{
		vector[0] = new double[3 * 1];
		for (int i = 1; i < 3; ++i)
			vector[i] =vector [0] + i * 1;
	}
	if (R == 1)
	{
		vector[0][0] = 1;
		change(R, 1, metroGrid20, vector);
	}
		
	else if (R==2)
	{
		vector[0][0] = -mat.res_matrix[0][1];
		vector[1][0] = 1;
		change(R, 1, metroGrid20, vector);
	}
	else
	{
		MetroFramework::MetroMessageBox::Show(this, "Bu kisim hala gelistirilmekte, en yakin zamanda hizmetinizdeyiz","Oops", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
};
}