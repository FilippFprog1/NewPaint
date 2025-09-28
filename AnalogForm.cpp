#include "AnalogForm.h"


/// <summary>
/// Требуемый метод для поддержки конструктора — не изменяйте 
/// содержимое этого метода с помощью редактора кода.
/// </summary>

/// <summary>
/// Требуемый метод для поддержки конструктора — не изменяйте 
/// содержимое этого метода с помощью редактора кода.
/// </summary>

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
	this->buttonApplySquare = (gcnew System::Windows::Forms::Button());
	this->SquareHightLabel = (gcnew System::Windows::Forms::Label());
	this->SquareWidthLabel = (gcnew System::Windows::Forms::Label());
	this->groupBoxSettingsCircle = (gcnew System::Windows::Forms::GroupBox());
	this->numericUpDownHightCircle = (gcnew System::Windows::Forms::NumericUpDown());
	this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
	this->buttonApplyCircle = (gcnew System::Windows::Forms::Button());
	this->CircleHightLabel = (gcnew System::Windows::Forms::Label());
	this->CircleWidthLabel = (gcnew System::Windows::Forms::Label());
	this->groupBoxТекстуры = (gcnew System::Windows::Forms::GroupBox());
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
	this->groupBoxТекстуры->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectWidth))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectHight))->BeginInit();
	this->groupBoxCreateProject->SuspendLayout();
	this->SuspendLayout();
	// 
	// menuStrip1
	// 
	resources->ApplyResources(this->menuStrip1, L"menuStrip1");
	this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
		this->ActivityToolStripMenuItem,
			this->AboutToolStripMenuItem, this->ExitToolStripMenuItem
	});
	this->menuStrip1->Name = L"menuStrip1";
	// 
	// ActivityToolStripMenuItem
	// 
	resources->ApplyResources(this->ActivityToolStripMenuItem, L"ActivityToolStripMenuItem");
	this->ActivityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
		this->CreateToolStripMenuItem,
			this->CreateAsToolStripMenuItem, this->ToolBoxToolStripMenuItem
	});
	this->ActivityToolStripMenuItem->Name = L"ActivityToolStripMenuItem";
	this->ActivityToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::ActivityToolStripMenuItem_Click);
	// 
	// CreateToolStripMenuItem
	// 
	resources->ApplyResources(this->CreateToolStripMenuItem, L"CreateToolStripMenuItem");
	this->CreateToolStripMenuItem->Name = L"CreateToolStripMenuItem";
	this->CreateToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::CreateToolStripMenuItem_Click);
	// 
	// CreateAsToolStripMenuItem
	// 
	resources->ApplyResources(this->CreateAsToolStripMenuItem, L"CreateAsToolStripMenuItem");
	this->CreateAsToolStripMenuItem->Name = L"CreateAsToolStripMenuItem";
	this->CreateAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::CreateAsToolStripMenuItem_Click);
	// 
	// ToolBoxToolStripMenuItem
	// 
	resources->ApplyResources(this->ToolBoxToolStripMenuItem, L"ToolBoxToolStripMenuItem");
	this->ToolBoxToolStripMenuItem->Name = L"ToolBoxToolStripMenuItem";
	this->ToolBoxToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::ToolBoxToolStripMenuItem_Click);
	// 
	// AboutToolStripMenuItem
	// 
	resources->ApplyResources(this->AboutToolStripMenuItem, L"AboutToolStripMenuItem");
	this->AboutToolStripMenuItem->Name = L"AboutToolStripMenuItem";
	this->AboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::AboutToolStripMenuItem_Click);
	// 
	// ExitToolStripMenuItem
	// 
	resources->ApplyResources(this->ExitToolStripMenuItem, L"ExitToolStripMenuItem");
	this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
	this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &AnalogForm::ExitToolStripMenuItem_Click);
	// 
	// MainPictureBox
	// 
	resources->ApplyResources(this->MainPictureBox, L"MainPictureBox");
	this->MainPictureBox->Name = L"MainPictureBox";
	this->MainPictureBox->TabStop = false;
	// 
	// ToolBox
	// 
	resources->ApplyResources(this->ToolBox, L"ToolBox");
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
	resources->ApplyResources(this->groupBoxSettingsSquare, L"groupBoxSettingsSquare");
	this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownHightSquare);
	this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownWidthSquare);
	this->groupBoxSettingsSquare->Controls->Add(this->buttonApplySquare);
	this->groupBoxSettingsSquare->Controls->Add(this->SquareHightLabel);
	this->groupBoxSettingsSquare->Controls->Add(this->SquareWidthLabel);
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
	// buttonApplySquare
	// 
	resources->ApplyResources(this->buttonApplySquare, L"buttonApplySquare");
	this->buttonApplySquare->Name = L"buttonApplySquare";
	this->buttonApplySquare->UseVisualStyleBackColor = true;
	this->buttonApplySquare->Click += gcnew System::EventHandler(this, &AnalogForm::buttonApplySquare_Click);
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
	resources->ApplyResources(this->groupBoxSettingsCircle, L"groupBoxSettingsCircle");
	this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownHightCircle);
	this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownWidthCircle);
	this->groupBoxSettingsCircle->Controls->Add(this->buttonApplyCircle);
	this->groupBoxSettingsCircle->Controls->Add(this->CircleHightLabel);
	this->groupBoxSettingsCircle->Controls->Add(this->CircleWidthLabel);
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
	// buttonApplyCircle
	// 
	resources->ApplyResources(this->buttonApplyCircle, L"buttonApplyCircle");
	this->buttonApplyCircle->Name = L"buttonApplyCircle";
	this->buttonApplyCircle->UseVisualStyleBackColor = true;
	this->buttonApplyCircle->Click += gcnew System::EventHandler(this, &AnalogForm::buttonApplyCircle_Click);
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
	// groupBoxТекстуры
	// 
	resources->ApplyResources(this->groupBoxТекстуры, L"groupBoxТекстуры");
	this->groupBoxТекстуры->Controls->Add(this->numericUpDownHeightTexture);
	this->groupBoxТекстуры->Controls->Add(this->numericUpDownWidthTexture);
	this->groupBoxТекстуры->Controls->Add(this->buttonApplyTexture);
	this->groupBoxТекстуры->Controls->Add(this->TextureHeightLabel);
	this->groupBoxТекстуры->Controls->Add(this->TextureWidthLabel);
	this->groupBoxТекстуры->Name = L"groupBoxТекстуры";
	this->groupBoxТекстуры->TabStop = false;
	this->groupBoxТекстуры->Enter += gcnew System::EventHandler(this, &AnalogForm::groupBoxТекстуры_Enter);
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
	resources->ApplyResources(this->groupBoxCreateProject, L"groupBoxCreateProject");
	this->groupBoxCreateProject->Controls->Add(this->buttonOpenProject);
	this->groupBoxCreateProject->Controls->Add(this->numericUpDownProjectHight);
	this->groupBoxCreateProject->Controls->Add(this->numericUpDownProjectWidth);
	this->groupBoxCreateProject->Controls->Add(this->buttonCreateNewProject);
	this->groupBoxCreateProject->Controls->Add(this->ProjectHeightEnd);
	this->groupBoxCreateProject->Controls->Add(this->ProjectWidthEnd);
	this->groupBoxCreateProject->Name = L"groupBoxCreateProject";
	this->groupBoxCreateProject->TabStop = false;
	this->groupBoxCreateProject->Enter += gcnew System::EventHandler(this, &AnalogForm::groupBoxCreateProject_Enter);
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
	resources->ApplyResources(this->openFileDialog1, L"openFileDialog1");
	// 
	// saveFileDialog1
	// 
	resources->ApplyResources(this->saveFileDialog1, L"saveFileDialog1");
	// 
	// AnalogForm
	// 
	resources->ApplyResources(this, L"$this");
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->Controls->Add(this->groupBoxCreateProject);
	this->Controls->Add(this->groupBoxТекстуры);
	this->Controls->Add(this->groupBoxSettingsCircle);
	this->Controls->Add(this->groupBoxSettingsSquare);
	this->Controls->Add(this->ToolBox);
	this->Controls->Add(this->MainPictureBox);
	this->Controls->Add(this->menuStrip1);
	this->MainMenuStrip = this->menuStrip1;
	this->Name = L"AnalogForm";
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
	this->groupBoxТекстуры->ResumeLayout(false);
	this->groupBoxТекстуры->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthTexture))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectWidth))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownProjectHight))->EndInit();
	this->groupBoxCreateProject->ResumeLayout(false);
	this->ResumeLayout(false);
	this->PerformLayout();

}
