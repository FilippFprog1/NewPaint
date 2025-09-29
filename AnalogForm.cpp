#include "AnalogForm.h"


#include <Windows.h>
#include <stdio.h>

#pragma comment(lib, "user32.lib")

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    AnalogPaint::AnalogForm form;
    Application::Run(% form);
}

struct Vector2D {
    int X,
        Y;
};
Vector2D mousePosition;

AnalogPaint::AnalogForm::AnalogForm(void)
{
    InitializeComponent();

    openFileDialog1->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
    saveFileDialog1->Filter = "Файлы изображения (*.bmp, *.jpg, *.png)|*.bmp;*.jpg;*.png";
}

inline void AnalogPaint::AnalogForm::InitializeComponent(void)
{
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AnalogForm::typeid));
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->ActivityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->CreateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->CreateAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->ToolBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->AboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->MainPictureBox = (gcnew System::Windows::Forms::PictureBox());
    this->ToolBox = (gcnew System::Windows::Forms::GroupBox());
    this->numericUpDownSize = (gcnew System::Windows::Forms::NumericUpDown());
    this->buttonActivateTexture = (gcnew System::Windows::Forms::Button());
    this->buttonActivateCircle = (gcnew System::Windows::Forms::Button());
    this->buttonActivateSquare = (gcnew System::Windows::Forms::Button());
    this->buttonActivateLine = (gcnew System::Windows::Forms::Button());
    this->buttonApplySize = (gcnew System::Windows::Forms::Button());
    this->buttonClearCanvas = (gcnew System::Windows::Forms::Button());
    this->buttonColor = (gcnew System::Windows::Forms::Button());
    this->FigureLabel = (gcnew System::Windows::Forms::Label());
    this->ParametrsLabel = (gcnew System::Windows::Forms::Label());
    this->groupBoxSettingsSquare = (gcnew System::Windows::Forms::GroupBox());
    this->numericUpDownHightSquare = (gcnew System::Windows::Forms::NumericUpDown());
    this->numericUpDownWidthSquare = (gcnew System::Windows::Forms::NumericUpDown());
    this->SquareHightLabel = (gcnew System::Windows::Forms::Label());
    this->SquareWidthLabel = (gcnew System::Windows::Forms::Label());
    this->groupBoxSettingsCircle = (gcnew System::Windows::Forms::GroupBox());
    this->numericUpDownHightCircle = (gcnew System::Windows::Forms::NumericUpDown());
    this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
    this->CircleHightLabel = (gcnew System::Windows::Forms::Label());
    this->CircleWidthLabel = (gcnew System::Windows::Forms::Label());
    this->groupBoxSettingsTexture = (gcnew System::Windows::Forms::GroupBox());
    this->buttonChooseTexture = (gcnew System::Windows::Forms::Button());
    this->numericUpDownHeightTexture = (gcnew System::Windows::Forms::NumericUpDown());
    this->numericUpDownWidthTexture = (gcnew System::Windows::Forms::NumericUpDown());
    this->buttonApplyTexture = (gcnew System::Windows::Forms::Button());
    this->TextureHeightLabel = (gcnew System::Windows::Forms::Label());
    this->TextureWidthLabel = (gcnew System::Windows::Forms::Label());
    this->ProjectWidthEnd = (gcnew System::Windows::Forms::Label());
    this->ProjectHeightEnd = (gcnew System::Windows::Forms::Label());
    this->buttonCreateNewProject = (gcnew System::Windows::Forms::Button());
    this->numericUpDownProjectWidth = (gcnew System::Windows::Forms::NumericUpDown());
    this->numericUpDownProjectHight = (gcnew System::Windows::Forms::NumericUpDown());
    this->groupBoxCreateProject = (gcnew System::Windows::Forms::GroupBox());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
    this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
    this->buttonOpenProject = (gcnew System::Windows::Forms::Button());
    this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
    this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
    this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
    this->menuStrip1->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainPictureBox))->BeginInit();
    this->ToolBox->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->BeginInit();
    this->groupBoxSettingsSquare->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHightSquare))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->BeginInit();
    this->groupBoxSettingsCircle->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHightCircle))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->BeginInit();
    this->groupBoxSettingsTexture->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectWidth))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectHight))->BeginInit();
    this->groupBoxCreateProject->SuspendLayout();
    this->SuspendLayout();
    // 
    // menuStrip1
    // 
    this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
        this->ActivityToolStripMenuItem,
            this->AboutToolStripMenuItem, this->ExitToolStripMenuItem
    });
    resources->ApplyResources(this->menuStrip1, L"menuStrip1");
    this->menuStrip1->Name = L"menuStrip1";
    // 
    // ActivityToolStripMenuItem
    // 
    this->ActivityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
        this->CreateToolStripMenuItem,
            this->CreateAsToolStripMenuItem, this->ToolBoxToolStripMenuItem
    });
    this->ActivityToolStripMenuItem->Name = L"ActivityToolStripMenuItem";
    resources->ApplyResources(this->ActivityToolStripMenuItem, L"ActivityToolStripMenuItem");
    this->ActivityToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::ActivityToolStripMenuItem_Click);
    // 
    // CreateToolStripMenuItem
    // 
    this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
    resources->ApplyResources(this->CreateToolStripMenuItem, L"CreateToolStripMenuItem");
    this->CreateToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::CreateToolStripMenuItem_Click);
    // 
    // CreateAsToolStripMenuItem
    // 
    this->CreateAsToolStripMenuItem->Name = L"CreateAsToolStripMenuItem";
    resources->ApplyResources(this->CreateAsToolStripMenuItem, L"CreateAsToolStripMenuItem");
    this->CreateAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::CreateAsToolStripMenuItem_Click);
    // 
    // ToolBoxToolStripMenuItem
    // 
    this->ToolBoxToolStripMenuItem->Name = L"ToolBoxToolStripMenuItem";
    resources->ApplyResources(this->ToolBoxToolStripMenuItem, L"ToolBoxToolStripMenuItem");
    this->ToolBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::ToolBoxToolStripMenuItem_Click);
    // 
    // AboutToolStripMenuItem
    // 
    this->AboutToolStripMenuItem->Name = L"AboutToolStripMenuItem";
    resources->ApplyResources(this->AboutToolStripMenuItem, L"AboutToolStripMenuItem");
    this->AboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::AboutToolStripMenuItem_Click);
    // 
    // ExitToolStripMenuItem
    // 
    this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
    resources->ApplyResources(this->ExitToolStripMenuItem, L"ExitToolStripMenuItem");
    this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::ExitToolStripMenuItem_Click);
    // 
    // MainPictureBox
    // 
    resources->ApplyResources(this->MainPictureBox, L"MainPictureBox");
    this->MainPictureBox->Name = L"MainPictureBox";
    this->MainPictureBox->TabStop = false;
    this->MainPictureBox->SizeChanged += gcnew System::EventHandler(this, &AnalogForm::MainPictureBox_SizeChanged);
    this->MainPictureBox->Click += gcnew System::EventHandler(this, &AnalogForm::MainPictureBox_Click);
    this->MainPictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AnalogForm::MainPictureBox_Paint);
    this->MainPictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AnalogForm::MainPictureBox_MouseDown);
    this->MainPictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AnalogForm::MainPictureBox_MouseMove);
    this->MainPictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AnalogForm::MainPictureBox_MouseUp);
    // 
    // ToolBox
    // 
    this->ToolBox->Controls->Add(this->numericUpDownSize);
    this->ToolBox->Controls->Add(this->buttonActivateTexture);
    this->ToolBox->Controls->Add(this->buttonActivateCircle);
    this->ToolBox->Controls->Add(this->buttonActivateSquare);
    this->ToolBox->Controls->Add(this->buttonActivateLine);
    this->ToolBox->Controls->Add(this->buttonApplySize);
    this->ToolBox->Controls->Add(this->buttonClearCanvas);
    this->ToolBox->Controls->Add(this->buttonColor);
    this->ToolBox->Controls->Add(this->FigureLabel);
    this->ToolBox->Controls->Add(this->ParametrsLabel);
    resources->ApplyResources(this->ToolBox, L"ToolBox");
    this->ToolBox->Name = L"ToolBox";
    this->ToolBox->TabStop = false;
    // 
    // numericUpDownSize
    // 
    resources->ApplyResources(this->numericUpDownSize, L"numericUpDownSize");
    this->numericUpDownSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownSize->Name = L"numericUpDownSize";
    this->numericUpDownSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownSize->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownSize_ValueChanged);
    // 
    // buttonActivateTexture
    // 
    resources->ApplyResources(this->buttonActivateTexture, L"buttonActivateTexture");
    this->buttonActivateTexture->Name = L"buttonActivateTexture";
    this->buttonActivateTexture->UseVisualStyleBackColor = true;
    this->buttonActivateTexture->Click += gcnew System::EventHandler(this, &AnalogForm::buttonActivateTexture_Click);
    // 
    // buttonActivateCircle
    // 
    resources->ApplyResources(this->buttonActivateCircle, L"buttonActivateCircle");
    this->buttonActivateCircle->Name = L"buttonActivateCircle";
    this->buttonActivateCircle->UseVisualStyleBackColor = true;
    this->buttonActivateCircle->Click += gcnew System::EventHandler(this, &AnalogForm::buttonActivateCircle_Click);
    // 
    // buttonActivateSquare
    // 
    resources->ApplyResources(this->buttonActivateSquare, L"buttonActivateSquare");
    this->buttonActivateSquare->Name = L"buttonActivateSquare";
    this->buttonActivateSquare->UseVisualStyleBackColor = true;
    this->buttonActivateSquare->Click += gcnew System::EventHandler(this, &AnalogForm::buttonActivateSquare_Click);
    // 
    // buttonActivateLine
    // 
    resources->ApplyResources(this->buttonActivateLine, L"buttonActivateLine");
    this->buttonActivateLine->Name = L"buttonActivateLine";
    this->buttonActivateLine->UseVisualStyleBackColor = true;
    this->buttonActivateLine->Click += gcnew System::EventHandler(this, &AnalogForm::buttonActivateLine_Click);
    // 
    // buttonApplySize
    // 
    resources->ApplyResources(this->buttonApplySize, L"buttonApplySize");
    this->buttonApplySize->Name = L"buttonApplySize";
    this->buttonApplySize->UseVisualStyleBackColor = true;
    this->buttonApplySize->Click += gcnew System::EventHandler(this, &AnalogForm::buttonApplySize_Click);
    // 
    // buttonClearCanvas
    // 
    resources->ApplyResources(this->buttonClearCanvas, L"buttonClearCanvas");
    this->buttonClearCanvas->Name = L"buttonClearCanvas";
    this->buttonClearCanvas->UseVisualStyleBackColor = true;
    this->buttonClearCanvas->Click += gcnew System::EventHandler(this, &AnalogForm::buttonClearCanvas_Click);
    // 
    // buttonColor
    // 
    resources->ApplyResources(this->buttonColor, L"buttonColor");
    this->buttonColor->Name = L"buttonColor";
    this->buttonColor->UseVisualStyleBackColor = true;
    this->buttonColor->Click += gcnew System::EventHandler(this, &AnalogForm::buttonColor_Click);
    // 
    // FigureLabel
    // 
    resources->ApplyResources(this->FigureLabel, L"FigureLabel");
    this->FigureLabel->Name = L"FigureLabel";
    this->FigureLabel->Click += gcnew System::EventHandler(this, &AnalogForm::FigureLabel_Click);
    // 
    // ParametrsLabel
    // 
    resources->ApplyResources(this->ParametrsLabel, L"ParametrsLabel");
    this->ParametrsLabel->Name = L"ParametrsLabel";
    this->ParametrsLabel->Click += gcnew System::EventHandler(this, &AnalogForm::ParametrsLabel_Click);
    // 
    // groupBoxSettingsSquare
    // 
    this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownHightSquare);
    this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownWidthSquare);
    this->groupBoxSettingsSquare->Controls->Add(this->SquareHightLabel);
    this->groupBoxSettingsSquare->Controls->Add(this->SquareWidthLabel);
    resources->ApplyResources(this->groupBoxSettingsSquare, L"groupBoxSettingsSquare");
    this->groupBoxSettingsSquare->Name = L"groupBoxSettingsSquare";
    this->groupBoxSettingsSquare->TabStop = false;
    this->groupBoxSettingsSquare->Enter += gcnew System::EventHandler(this, &AnalogForm::groupBoxSettingsSquare_Enter);
    // 
    // numericUpDownHightSquare
    // 
    resources->ApplyResources(this->numericUpDownHightSquare, L"numericUpDownHightSquare");
    this->numericUpDownHightSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownHightSquare->Name = L"numericUpDownHightSquare";
    this->numericUpDownHightSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownHightSquare->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownHightSquare_ValueChanged);
    // 
    // numericUpDownWidthSquare
    // 
    resources->ApplyResources(this->numericUpDownWidthSquare, L"numericUpDownWidthSquare");
    this->numericUpDownWidthSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownWidthSquare->Name = L"numericUpDownWidthSquare";
    this->numericUpDownWidthSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownWidthSquare->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownWidthSquare_ValueChanged);
    // 
    // SquareHightLabel
    // 
    resources->ApplyResources(this->SquareHightLabel, L"SquareHightLabel");
    this->SquareHightLabel->Name = L"SquareHightLabel";
    this->SquareHightLabel->Click += gcnew System::EventHandler(this, &AnalogForm::SquareHightLabel_Click);
    // 
    // SquareWidthLabel
    // 
    resources->ApplyResources(this->SquareWidthLabel, L"SquareWidthLabel");
    this->SquareWidthLabel->Name = L"SquareWidthLabel";
    this->SquareWidthLabel->Click += gcnew System::EventHandler(this, &AnalogForm::SquareWidthLabel_Click);
    // 
    // groupBoxSettingsCircle
    // 
    this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownHightCircle);
    this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownWidthCircle);
    this->groupBoxSettingsCircle->Controls->Add(this->CircleHightLabel);
    this->groupBoxSettingsCircle->Controls->Add(this->CircleWidthLabel);
    resources->ApplyResources(this->groupBoxSettingsCircle, L"groupBoxSettingsCircle");
    this->groupBoxSettingsCircle->Name = L"groupBoxSettingsCircle";
    this->groupBoxSettingsCircle->TabStop = false;
    this->groupBoxSettingsCircle->Enter += gcnew System::EventHandler(this, &AnalogForm::groupBoxSettingsCircle_Enter);
    // 
    // numericUpDownHightCircle
    // 
    resources->ApplyResources(this->numericUpDownHightCircle, L"numericUpDownHightCircle");
    this->numericUpDownHightCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownHightCircle->Name = L"numericUpDownHightCircle";
    this->numericUpDownHightCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownHightCircle->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownHightCircle_ValueChanged);
    // 
    // numericUpDownWidthCircle
    // 
    resources->ApplyResources(this->numericUpDownWidthCircle, L"numericUpDownWidthCircle");
    this->numericUpDownWidthCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownWidthCircle->Name = L"numericUpDownWidthCircle";
    this->numericUpDownWidthCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownWidthCircle->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownWidthCircle_ValueChanged);
    // 
    // CircleHightLabel
    // 
    resources->ApplyResources(this->CircleHightLabel, L"CircleHightLabel");
    this->CircleHightLabel->Name = L"CircleHightLabel";
    this->CircleHightLabel->Click += gcnew System::EventHandler(this, &AnalogForm::CircleHightLabel_Click);
    // 
    // CircleWidthLabel
    // 
    resources->ApplyResources(this->CircleWidthLabel, L"CircleWidthLabel");
    this->CircleWidthLabel->Name = L"CircleWidthLabel";
    this->CircleWidthLabel->Click += gcnew System::EventHandler(this, &AnalogForm::CircleWidthLabel_Click);
    // 
    // groupBoxSettingsTexture
    // 
    this->groupBoxSettingsTexture->Controls->Add(this->buttonChooseTexture);
    this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownHeightTexture);
    this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownWidthTexture);
    this->groupBoxSettingsTexture->Controls->Add(this->buttonApplyTexture);
    this->groupBoxSettingsTexture->Controls->Add(this->TextureHeightLabel);
    this->groupBoxSettingsTexture->Controls->Add(this->TextureWidthLabel);
    resources->ApplyResources(this->groupBoxSettingsTexture, L"groupBoxSettingsTexture");
    this->groupBoxSettingsTexture->Name = L"groupBoxSettingsTexture";
    this->groupBoxSettingsTexture->TabStop = false;
    this->groupBoxSettingsTexture->Enter += gcnew System::EventHandler(this, &AnalogForm::groupBoxТекстуры_Enter);
    // 
    // buttonChooseTexture
    // 
    resources->ApplyResources(this->buttonChooseTexture, L"buttonChooseTexture");
    this->buttonChooseTexture->Name = L"buttonChooseTexture";
    this->buttonChooseTexture->UseVisualStyleBackColor = true;
    this->buttonChooseTexture->Click += gcnew System::EventHandler(this, &AnalogForm::buttonChooseTexture_Click);
    // 
    // numericUpDownHeightTexture
    // 
    resources->ApplyResources(this->numericUpDownHeightTexture, L"numericUpDownHeightTexture");
    this->numericUpDownHeightTexture->Name = L"numericUpDownHeightTexture";
    this->numericUpDownHeightTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
    this->numericUpDownHeightTexture->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownHeightTexture_ValueChanged);
    // 
    // numericUpDownWidthTexture
    // 
    resources->ApplyResources(this->numericUpDownWidthTexture, L"numericUpDownWidthTexture");
    this->numericUpDownWidthTexture->Name = L"numericUpDownWidthTexture";
    this->numericUpDownWidthTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownWidthTexture->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownWidthTexture_ValueChanged);
    // 
    // buttonApplyTexture
    // 
    resources->ApplyResources(this->buttonApplyTexture, L"buttonApplyTexture");
    this->buttonApplyTexture->Name = L"buttonApplyTexture";
    this->buttonApplyTexture->UseVisualStyleBackColor = true;
    this->buttonApplyTexture->Click += gcnew System::EventHandler(this, &AnalogForm::buttonApplyTexture_Click);
    // 
    // TextureHeightLabel
    // 
    resources->ApplyResources(this->TextureHeightLabel, L"TextureHeightLabel");
    this->TextureHeightLabel->Name = L"TextureHeightLabel";
    this->TextureHeightLabel->Click += gcnew System::EventHandler(this, &AnalogForm::TextureHeightLabel_Click);
    // 
    // TextureWidthLabel
    // 
    resources->ApplyResources(this->TextureWidthLabel, L"TextureWidthLabel");
    this->TextureWidthLabel->Name = L"TextureWidthLabel";
    this->TextureWidthLabel->Click += gcnew System::EventHandler(this, &AnalogForm::TextureWidthLabel_Click);
    // 
    // ProjectWidthEnd
    // 
    resources->ApplyResources(this->ProjectWidthEnd, L"ProjectWidthEnd");
    this->ProjectWidthEnd->Name = L"ProjectWidthEnd";
    // 
    // ProjectHeightEnd
    // 
    resources->ApplyResources(this->ProjectHeightEnd, L"ProjectHeightEnd");
    this->ProjectHeightEnd->Name = L"ProjectHeightEnd";
    // 
    // buttonCreateNewProject
    // 
    resources->ApplyResources(this->buttonCreateNewProject, L"buttonCreateNewProject");
    this->buttonCreateNewProject->Name = L"buttonCreateNewProject";
    this->buttonCreateNewProject->UseVisualStyleBackColor = true;
    this->buttonCreateNewProject->Click += gcnew System::EventHandler(this, &AnalogForm::buttonCreateNewProject_Click);
    // 
    // numericUpDownProjectWidth
    // 
    resources->ApplyResources(this->numericUpDownProjectWidth, L"numericUpDownProjectWidth");
    this->numericUpDownProjectWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownProjectWidth->Name = L"numericUpDownProjectWidth";
    this->numericUpDownProjectWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownProjectWidth->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownProjectWidth_ValueChanged);
    // 
    // numericUpDownProjectHight
    // 
    resources->ApplyResources(this->numericUpDownProjectHight, L"numericUpDownProjectHight");
    this->numericUpDownProjectHight->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownProjectHight->Name = L"numericUpDownProjectHight";
    this->numericUpDownProjectHight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
    this->numericUpDownProjectHight->ValueChanged += gcnew System::EventHandler(this, &AnalogForm::numericUpDownProjectHight_ValueChanged);
    // 
    // groupBoxCreateProject
    // 
    this->groupBoxCreateProject->Controls->Add(this->label3);
    this->groupBoxCreateProject->Controls->Add(this->label2);
    this->groupBoxCreateProject->Controls->Add(this->label1);
    this->groupBoxCreateProject->Controls->Add(this->radioButton2);
    this->groupBoxCreateProject->Controls->Add(this->radioButton1);
    this->groupBoxCreateProject->Controls->Add(this->buttonOpenProject);
    this->groupBoxCreateProject->Controls->Add(this->numericUpDownProjectHight);
    this->groupBoxCreateProject->Controls->Add(this->numericUpDownProjectWidth);
    this->groupBoxCreateProject->Controls->Add(this->buttonCreateNewProject);
    this->groupBoxCreateProject->Controls->Add(this->ProjectHeightEnd);
    this->groupBoxCreateProject->Controls->Add(this->ProjectWidthEnd);
    resources->ApplyResources(this->groupBoxCreateProject, L"groupBoxCreateProject");
    this->groupBoxCreateProject->Name = L"groupBoxCreateProject";
    this->groupBoxCreateProject->TabStop = false;
    this->groupBoxCreateProject->Enter += gcnew System::EventHandler(this, &AnalogForm::groupBoxCreateProject_Enter);
    // 
    // label3
    // 
    resources->ApplyResources(this->label3, L"label3");
    this->label3->Name = L"label3";
    // 
    // label2
    // 
    resources->ApplyResources(this->label2, L"label2");
    this->label2->Name = L"label2";
    // 
    // label1
    // 
    resources->ApplyResources(this->label1, L"label1");
    this->label1->Name = L"label1";
    // 
    // radioButton2
    // 
    resources->ApplyResources(this->radioButton2, L"radioButton2");
    this->radioButton2->Name = L"radioButton2";
    this->radioButton2->TabStop = true;
    this->radioButton2->UseVisualStyleBackColor = true;
    // 
    // radioButton1
    // 
    resources->ApplyResources(this->radioButton1, L"radioButton1");
    this->radioButton1->Name = L"radioButton1";
    this->radioButton1->TabStop = true;
    this->radioButton1->UseVisualStyleBackColor = true;
    this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &AnalogForm::radioButton1_CheckedChanged);
    // 
    // buttonOpenProject
    // 
    resources->ApplyResources(this->buttonOpenProject, L"buttonOpenProject");
    this->buttonOpenProject->Name = L"buttonOpenProject";
    this->buttonOpenProject->UseVisualStyleBackColor = true;
    this->buttonOpenProject->Click += gcnew System::EventHandler(this, &AnalogForm::buttonOpenProject_Click);
    // 
    // openFileDialog1
    // 
    this->openFileDialog1->FileName = L"openFileDialog1";
    this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &AnalogForm::openFileDialog1_FileOk);
    // 
    // saveFileDialog1
    // 
    this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &AnalogForm::saveFileDialog1_FileOk);
    // 
    // AnalogForm
    // 
    resources->ApplyResources(this, L"$this");
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->Controls->Add(this->groupBoxCreateProject);
    this->Controls->Add(this->groupBoxSettingsTexture);
    this->Controls->Add(this->groupBoxSettingsCircle);
    this->Controls->Add(this->groupBoxSettingsSquare);
    this->Controls->Add(this->ToolBox);
    this->Controls->Add(this->MainPictureBox);
    this->Controls->Add(this->menuStrip1);
    this->MainMenuStrip = this->menuStrip1;
    this->Name = L"AnalogForm";
    this->Load += gcnew System::EventHandler(this, &AnalogForm::AnalogForm_Load);
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainPictureBox))->EndInit();
    this->ToolBox->ResumeLayout(false);
    this->ToolBox->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->EndInit();
    this->groupBoxSettingsSquare->ResumeLayout(false);
    this->groupBoxSettingsSquare->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHightSquare))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->EndInit();
    this->groupBoxSettingsCircle->ResumeLayout(false);
    this->groupBoxSettingsCircle->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHightCircle))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->EndInit();
    this->groupBoxSettingsTexture->ResumeLayout(false);
    this->groupBoxSettingsTexture->PerformLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectWidth))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectHight))->EndInit();
    this->groupBoxCreateProject->ResumeLayout(false);
    this->groupBoxCreateProject->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}

System::Void AnalogPaint::AnalogForm::ParametrsLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::FigureLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownSize_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::groupBoxSettingsSquare_Enter(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::groupBoxSettingsCircle_Enter(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::groupBoxТекстуры_Enter(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::SquareWidthLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::SquareHightLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::CircleWidthLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::CircleHightLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::TextureWidthLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::TextureHeightLabel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownWidthSquare_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownHightSquare_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonApplySquare_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownWidthCircle_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownHightCircle_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonApplyCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownWidthTexture_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownHeightTexture_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}



System::Void AnalogPaint::AnalogForm::groupBoxCreateProject_Enter(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownProjectWidth_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::numericUpDownProjectHight_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::MainPictureBox_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::ActivityToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::MainPictureBox_SizeChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (MainPictureBox->Image) {
        if (background)
            background = gcnew Bitmap(background, MainPictureBox->Width, MainPictureBox->Height);
        else
            background = gcnew Bitmap(MainPictureBox->Image, MainPictureBox->Width, MainPictureBox->Height);
    }
    delete canvas;
    canvas = Graphics::FromImage(background);
    MainPictureBox->Image = background;
    MainPictureBox->Refresh();
    MainPictureBox->Invalidate();

}

System::Void AnalogPaint::AnalogForm::MainPictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (statePen == 1) {
        //Отслеживаем нажатие кнопки мыши
        points->Clear(); //каждый раз рисуем заново, поэтому очищаем список
        points->Add(e->Location);
        draw = true;
        MainPictureBox->SizeMode = PictureBoxSizeMode::Normal;
    }
    else {
        mousePosition.X = e->Location.X; //позиция мышки по x и y
        mousePosition.Y = e->Location.Y;
    }

    MainPictureBox->Invalidate();//перерисовываем

}

System::Void AnalogPaint::AnalogForm::MainPictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    //Проверяем можно ли рисовать?
    if (draw && points->Contains(Point(e->X, e->Y)) == false) {
        //Проверяем нажатие левой кнопки мыши
        if (e->Button == System::Windows::Forms::MouseButtons::Left) {
            points->Add(e->Location);
        }
        MainPictureBox->Invalidate();
    }
}

System::Void AnalogPaint::AnalogForm::MainPictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    draw = false;
    MainPictureBox->Invalidate();

    mousePosition.X = -1;
    mousePosition.Y = -1;
}

System::Void AnalogPaint::AnalogForm::MainPictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
    switch (statePen)
    {
    case 1:
        if (points->Count > 1) {
            canvas->DrawLines(pen, points->ToArray());
        }
        break;
    case 2: //квадрат
        if (mousePosition.X != -1 && mousePosition.Y != -1) {
            canvas->DrawRectangle(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthSquare->Value), Convert::ToInt32(numericUpDownHightSquare->Value));
        }
        break;
    case 3: //круг
        if (mousePosition.X != -1 && mousePosition.Y != -1) {
            canvas->DrawEllipse(pen, mousePosition.X, mousePosition.Y, Convert::ToInt32(numericUpDownWidthCircle->Value), Convert::ToInt32(numericUpDownHightCircle->Value));
        }
        break;
    case 4: //текстура
        if (mousePosition.X != -1 && mousePosition.Y != -1) {
            canvas->DrawImage(texture, mousePosition.X, mousePosition.Y, texture->Width, texture->Height);
        }
        break;
    default:
        break;
    }

    if (clearAll) {
        points->Clear();
        canvas->Clear(Color::White);
        clearAll = false;

        mousePosition.X = -1;
        mousePosition.Y = -1;
        DrawBackground();
    }

}

System::Void AnalogPaint::AnalogForm::AnalogForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    color = Color::Red;
    size = 15;
    pen = gcnew Pen(color, size);
    points = gcnew List <Point>();
    draw = false;
    statePen = 1;

    buttonActivateLine->BackColor = Color::Green;
    buttonActivateCircle->BackColor = Color::LightGray;
    buttonActivateSquare->BackColor = Color::LightGray;
    buttonActivateTexture->BackColor = Color::LightGray;

    Bitmap^ Img = gcnew Bitmap(MainPictureBox->Width, MainPictureBox->Height);
    canvas = Graphics::FromImage(Img);
    MainPictureBox->Image = Img;
    MainPictureBox->BackColor = Color::White;

    numericUpDownProjectWidth->Minimum = 300;
    numericUpDownProjectHight->Minimum = 300;
    numericUpDownProjectWidth->Maximum = GetSystemMetrics(SM_CXSCREEN);
    numericUpDownProjectHight->Maximum = GetSystemMetrics(SM_CXSCREEN);

    clearAll = false;

    filename = "openFileDialog1";

    buttonColor->BackColor = color;

    return System::Void();
}

System::Void AnalogPaint::AnalogForm::radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ file;
    openFileDialog1->ShowDialog();
    file = openFileDialog1->FileName;

    if (file == "openFileDialog")
        return;


    statePen = 4;
    texture = gcnew Bitmap(file);

    buttonActivateTexture->BackColor = Color::Green;

    buttonActivateLine->BackColor = Color::LightGray;
    buttonActivateSquare->BackColor = Color::LightGray;
    buttonActivateCircle->BackColor = Color::LightGray;

    return System::Void();
}

System::Void AnalogPaint::AnalogForm::ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void AnalogPaint::AnalogForm::AboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Информация о программе!", "Информация");
}

System::Void AnalogPaint::AnalogForm::CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (groupBoxCreateProject->Visible) {
        groupBoxCreateProject->Visible = false;
    }
    else {
        groupBoxCreateProject->Visible = true;
        groupBoxCreateProject->Location = Point(12, 37);
    }
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::CreateAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fname;
    saveFileDialog1->ShowDialog();
    fname = saveFileDialog1->FileName;

    if (fname == "")
        return;

    Bitmap^ img = gcnew Bitmap(MainPictureBox->Image);
    img->Save(fname);

    MessageBox::Show("Изображение сохранено по адресу \"" + fname + "\".", "Внимание!");

    return System::Void();

}

System::Void AnalogPaint::AnalogForm::ToolBoxToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (ToolBox->Visible) {
        ToolBox->Visible = false;
    }
    else {
        ToolBox->Visible = true;
        ToolBox->Location = Point(12, 37);
    }

    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e)
{
    size = Convert::ToSingle(numericUpDownSize->Value);
    pen = gcnew Pen(color, size);

    return System::Void();
}


System::Void AnalogPaint::AnalogForm::buttonColor_Click(System::Object^ sender, System::EventArgs^ e)
{
    colorDialog1->ShowDialog();
    color = colorDialog1->Color;

    buttonColor->BackColor = color;

    if (color == Color::Black) {
        buttonColor->ForeColor = Color::White;
    }
    else {
        buttonColor->ForeColor = Color::Black;
    }

    pen = gcnew Pen(color, size);

    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e)
{
    clearAll = true;
    MainPictureBox->Invalidate();
    
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonActivateLine_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen != 1) {
        statePen = 1;

        buttonActivateLine->BackColor = Color::Green;

        buttonActivateLine->BackColor = Color::LightGray;
        buttonActivateSquare->BackColor = Color::LightGray;
        buttonActivateTexture->BackColor = Color::LightGray;
    }
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonActivateSquare_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen != 2) {
        statePen = 2;

        buttonActivateSquare->BackColor = Color::Green;

        buttonActivateLine->BackColor = Color::LightGray;
        buttonActivateTexture->BackColor = Color::LightGray;
        buttonActivateCircle->BackColor = Color::LightGray;

        groupBoxSettingsSquare->Visible = true;
        groupBoxSettingsSquare->Location = Point(30, 172);

        groupBoxSettingsCircle->Visible = false;
        groupBoxSettingsTexture->Visible = false;
    }
    else {
        if (groupBoxSettingsSquare->Visible) {
            groupBoxSettingsSquare->Visible = false;
        }
        else {
            groupBoxSettingsSquare->Visible = true;
            groupBoxSettingsSquare->Location = Point(30, 172);
        }
    }
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonActivateCircle_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen != 3) {
        statePen = 3;

        buttonActivateCircle->BackColor = Color::Green;

        buttonActivateLine->BackColor = Color::LightGray;
        buttonActivateSquare->BackColor = Color::LightGray;
        buttonActivateTexture->BackColor = Color::LightGray;

        groupBoxSettingsCircle->Visible = true;
        groupBoxSettingsCircle->Location = Point(30, 172);

        groupBoxSettingsSquare->Visible = false;
        groupBoxSettingsTexture->Visible = false;
    }
    else {
        if (groupBoxSettingsCircle->Visible) {
            groupBoxSettingsCircle->Visible = false;
        }
        else {
            groupBoxSettingsCircle->Visible = true;
            groupBoxSettingsCircle->Location = Point(30, 172);
        }
    }
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonActivateTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (statePen != 4) {
        groupBoxSettingsTexture->Visible = true;
        groupBoxSettingsTexture->Location = Point(30, 172);

        groupBoxSettingsCircle->Visible = false;
        groupBoxSettingsSquare->Visible = false;

        if (texture != nullptr) {
            statePen = 4;

            buttonActivateTexture->BackColor = Color::Green;

            buttonActivateLine->BackColor = Color::LightGray;
            buttonActivateSquare->BackColor = Color::LightGray;
            buttonActivateCircle->BackColor = Color::LightGray;
        }
    }
    else {
        if (groupBoxSettingsTexture->Visible) {
            groupBoxSettingsTexture->Visible = false;
        }
        else {
            groupBoxSettingsTexture->Visible = true;
            groupBoxSettingsTexture->Location = Point(30, 172);
        }
    }
    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Width = Convert::ToInt32(numericUpDownProjectWidth->Value);
    this->Height = Convert::ToInt32(numericUpDownProjectHight->Value);

    if (groupBoxCreateProject->Visible) {
        groupBoxCreateProject->Visible = false;
    }

    filename = "openFileDialog1";

    return System::Void();
}

System::Void AnalogPaint::AnalogForm::buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (radioButton1->Checked == false && radioButton2->Checked == false) {
        MessageBox::Show("Выберите размер фона!", "Внимание!");
        return;
    }

    openFileDialog1->ShowDialog();
    filename = openFileDialog1->FileName;

    if (filename == "openFileDialog1")
        return;

    background = gcnew Bitmap(filename);

    if (radioButton1->Checked) {
        this->Width = background->Width;
        this->Height = background->Height;
    }
    else if (radioButton2->Checked) {
        background = gcnew Bitmap(background, Convert::ToInt32(numericUpDownProjectWidth->Width), Convert::ToInt32(numericUpDownProjectWidth->Height));
        this->Width = background->Width;
        this->Height = background->Height;
    }

    canvas = Graphics::FromImage(background);
    MainPictureBox->Image = background;

    if (groupBoxCreateProject->Visible) {
        groupBoxCreateProject->Visible = false;
    }

    return System::Void();
}

void AnalogPaint::AnalogForm::DrawBackground()
{
    if (filename != "openFileDialog1") {
        background = gcnew Bitmap(filename);
        background = gcnew Bitmap(background, MainPictureBox->Width, MainPictureBox->Height);
    }
    else
        background = gcnew Bitmap(MainPictureBox->Image, MainPictureBox->Width, MainPictureBox->Height);

    delete canvas;
    canvas = Graphics::FromImage(background);
    MainPictureBox->Image = background;
    MainPictureBox->Refresh();
    MainPictureBox->Invalidate();
}

System::Void AnalogPaint::AnalogForm::buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e)
{
    float width = Convert::ToSingle(numericUpDownWidthTexture->Value);
    float height = Convert::ToSingle(numericUpDownHeightTexture->Value);
    texture = gcnew Bitmap(texture, width, height);


    return System::Void();
}