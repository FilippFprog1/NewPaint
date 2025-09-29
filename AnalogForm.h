#pragma once

namespace AnalogPaint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
    using namespace System::Data;
	using namespace System::Collections::Generic;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для AnalogForm
	/// </summary>
	public ref class AnalogForm : public System::Windows::Forms::Form
	{
	public:
		AnalogForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AnalogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ActivityToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CreateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ CreateAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolBoxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	protected:







	private: System::Windows::Forms::PictureBox^ MainPictureBox;

	private: System::Windows::Forms::GroupBox^ ToolBox;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownSize;
	private: System::Windows::Forms::Button^ buttonActivateTexture;
	private: System::Windows::Forms::Button^ buttonActivateCircle;
	private: System::Windows::Forms::Button^ buttonActivateSquare;
	private: System::Windows::Forms::Button^ buttonActivateLine;
	private: System::Windows::Forms::Button^ buttonApplySize;
	private: System::Windows::Forms::Button^ buttonClearCanvas;

	private: System::Windows::Forms::Button^ buttonColor;
	private: System::Windows::Forms::Label^ FigureLabel;
	private: System::Windows::Forms::Label^ ParametrsLabel;







	private: System::Windows::Forms::GroupBox^ groupBoxSettingsSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHightSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthSquare;
	private: System::Windows::Forms::Button^ buttonApplySquare;
	private: System::Windows::Forms::Label^ SquareHightLabel;

	private: System::Windows::Forms::Label^ SquareWidthLabel;

	private: System::Windows::Forms::GroupBox^ groupBoxSettingsCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHightCircle;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthCircle;
	private: System::Windows::Forms::Button^ buttonApplyCircle;
	private: System::Windows::Forms::Label^ CircleHightLabel;



	private: System::Windows::Forms::Label^ CircleWidthLabel;

	private: System::Windows::Forms::GroupBox^ groupBoxТекстуры;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightTexture;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthTexture;
	private: System::Windows::Forms::Button^ buttonApplyTexture;
	private: System::Windows::Forms::Label^ TextureHeightLabel;




	private: System::Windows::Forms::Label^ TextureWidthLabel;
	private: System::Windows::Forms::Label^ ProjectWidthEnd;
	private: System::Windows::Forms::Label^ ProjectHeightEnd;



	private: System::Windows::Forms::Button^ buttonCreateNewProject;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownProjectWidth;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownProjectHight;

	private: System::Windows::Forms::GroupBox^ groupBoxCreateProject;
	private: System::Windows::Forms::Button^ buttonOpenProject;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;







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
		void InitializeComponent(void);
#pragma endregion
	private:
		Graphics^ canvas; //полотно
		List <Point>^ points;
		Pen^ pen; //перо
		bool draw;
		Bitmap^ background;
		Bitmap^ background_;
		Color color;
		Bitmap ^ texture;
		float size;
		bool clearAll;
		String^ filename;
		int statePen;
		/*
		* statePen = 1 - линия
		* 2 - квадрат
		* 3 - круг
		* 4 - текстура
		*/

private: System::Void ParametrsLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: void DrawBackground();
private: System::Void buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CreateAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ToolBoxToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ActivityToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FigureLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonColor_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownSize_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActivateLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActivateSquare_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActivateCircle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonActivateTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBoxSettingsSquare_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBoxSettingsCircle_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBoxТекстуры_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void SquareWidthLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void SquareHightLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CircleWidthLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void CircleHightLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TextureWidthLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TextureHeightLabel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownWidthSquare_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownHightSquare_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplySquare_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownWidthCircle_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownHightCircle_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplyCircle_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownWidthTexture_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownHeightTexture_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBoxCreateProject_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownProjectWidth_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownProjectHight_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainPictureBox_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainPictureBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void MainPictureBox_SizeChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void MainPictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MainPictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void MainPictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void AnalogForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
};
}
