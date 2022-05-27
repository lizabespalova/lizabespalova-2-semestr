#include "MyForm.h"
#include "func.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	onearmedform::MyForm form;
	Application::Run(%form);
}
struct fruits {
	bool apple=false;
	bool lemon=false;
	bool pear=false;
	bool carrot=false;
	bool strawberry = false;
	bool beet = false;
	bool pos7=false;
	bool pos8=false;
	bool pos9=false;
	
};
int score = 0;
int globscore=0;
int* arr = new int[M];
int setansw = 3;
int schet = 0;
fruits fruit;
bool raschet = true;

System::Void onearmedform::MyForm::правилаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("При нажатии кнопки Enter происходит вращение барабанов\nЗа определенные комбинации вы будете получать очки\nА именно, если все фрукты совпали или наоборот они все разные\nЕсли все фрукты совпали, вы получаете 200 очков\nЕсли все разные, то 100\nВ ином случае - 0\nУ вас будет от 1 до 20 попыток вращения барабана за 1 игру(количество вы выбираете сами)\nПо умолчанию стоит 3 вращения\nХорошей игры и удачи!)\n");
	return System::Void();
}
System::Void onearmedform::MyForm::выборКартинокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	    groupBox4->Visible = false;
		groupBox3->Visible = true;
		groupBox6->Visible = false;
		groupBox7->Visible = false;
		groupBox2->Visible = false;
		button->Visible = false;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		pictureBox6->Visible = true;
		pictureBox7->Visible = false;
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		buttonprim1->Visible = true;
		buttonprim2->Visible = true;
		buttonprim3->Visible = true;
		buttonprim4->Visible = true;
		buttonprim5->Visible = true;
		buttonprim6->Visible = true;
		raschet = true;
		setansw = 0;
		score = 0;
	return System::Void();
}
System::Void onearmedform::MyForm::количествоВращенийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox4->Visible = false;
	groupBox3->Visible = false;
	groupBox7->Visible = false;
	groupBox6->Visible = false;
	groupBox2->Visible = true;
	numericUpDown2->Visible = true;
	labelRevolves->Visible = true;
	buttonAmount->Visible = true;
	button->Visible = false;
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox7->Visible = false;
	pictureBox8->Visible = false;
	pictureBox9->Visible = false;
	buttonprim1->Visible = false;
	buttonprim2->Visible = false;
	buttonprim3->Visible = false;
	buttonprim4->Visible = false;
	buttonprim5->Visible = false;
	buttonprim6->Visible = false;
	setansw = 0;
	return System::Void();
}
System::Void onearmedform::MyForm::играToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox4->Visible = true;
	button->Visible = true;
	Score1->Visible = true;
	Amount1->Visible = true;
	groupBox3->Visible = false;
	groupBox6->Visible = true;
	groupBox2->Visible = false;
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox7->Visible = true;
	pictureBox8->Visible = true;
	pictureBox9->Visible = true;
	buttonprim1->Visible = false;
	buttonprim2->Visible = false;
	buttonprim3->Visible = false;
	buttonprim4->Visible = false;
	buttonprim5->Visible = false;
	buttonprim6->Visible = false;
	fruit.apple = false;
	fruit.carrot = false;
	fruit.beet = false;
	fruit.lemon = false;
	fruit.pear = false;
	fruit.strawberry = false;
	fruit.pos7 = false;
	fruit.pos8 = false;
	fruit.pos9 = false;
	Amount2->Text = System::Convert::ToString(score);
	return System::Void();
}
System::Void onearmedform::MyForm::счетToolStripMenuItemScore_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox6->Visible = false;
	Score1->Visible = false;
	Amount1->Visible = false;
	groupBox4->Visible = false;
	groupBox3->Visible = false;
	groupBox2->Visible = false;	
	button->Visible = false;
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox7->Visible = false;
	pictureBox8->Visible = false;
	pictureBox9->Visible = false;
	buttonprim1->Visible = false;
	buttonprim2->Visible = false;
	buttonprim3->Visible = false;
	buttonprim4->Visible = false;
	buttonprim5->Visible = false;
	buttonprim6->Visible = false;
	groupBox7->Visible = true;
	Score2->Visible = true;
	Amount2->Visible = true;
	Amount2->Text = System::Convert::ToString(globscore);
	return System::Void();
}
System::Void onearmedform::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	return System::Void();
}
 System::Void onearmedform::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (raschet == true) {
	
		 pictureBox10->Image = pictureBox7->Image;
		 pictureBox11->Image = pictureBox8->Image;
		 pictureBox12->Image = pictureBox9->Image;
		 raschet = false;
	 }
	
	 if (schet == setansw) {
		 MessageBox::Show("Ваш счет" + score);
		 schet = 0;
		 score = 0;
	 }
	
		 dvig1->Enabled = true;
		 dvig2->Enabled = true;
		 dvig3->Enabled = true;
		 stop1->Enabled = true;
		 stop2->Enabled = true;
		 stop3->Enabled = true;
		 schet++;
		 Amount2->Text = System::Convert::ToString(score);
	 return System::Void();
}
 System::Void onearmedform::MyForm::numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	 setansw = Convert::ToInt32(numericUpDown2->Value);
	 return System::Void();
}
 System::Void onearmedform::MyForm::buttonprim1_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (fruit.pos8 == false&&fruit.pos7==true) {
		 pictureBox8->Image = pictureBox1->Image;
		 fruit.pos8 = true;
	 }
	 else if (fruit.pos9 == false && fruit.pear == true&&(fruit.lemon||fruit.apple==true)) {
		 pictureBox9->Image = pictureBox1->Image;
		 fruit.pos9 = true;
	 }
	 else
	 pictureBox7->Image = pictureBox1->Image;
	 fruit.carrot = true;
	 fruit.pos7 = true;
	 return System::Void();
 }
 System::Void onearmedform::MyForm::buttonprim2_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (fruit.pos7==false&&fruit.pos8==true) {
		 pictureBox7->Image = pictureBox2->Image;
		 fruit.pos7 = true;
	 }
	 else if (fruit.pos9 == false&& (fruit.lemon ==true|| fruit.apple == true)) {
		 pictureBox9->Image = pictureBox2->Image;
		 fruit.pos9 = true;
	 }
	 else
	 pictureBox8->Image = pictureBox2->Image;
	 fruit.pos8 = true;
	 fruit.lemon = true;
	 return System::Void();
}
 System::Void onearmedform::MyForm::buttonprim3_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (fruit.pos7 == false&&fruit.pos9==true) {
		 pictureBox7->Image = pictureBox3->Image;
		 fruit.pos7 = true;
	 }
	 else if (fruit.pos8 == false&&( fruit.beet==true || fruit.strawberry == true)) {
		 pictureBox8->Image = pictureBox3->Image;
		 fruit.pos8 = true;
	 }
	 else
	 pictureBox9->Image = pictureBox3->Image;
	 fruit.pos9 = true;
	 fruit.beet = true;
	return System::Void();
}
 System::Void onearmedform::MyForm::buttonprim4_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (fruit.pos8 == false && fruit.pos7 == true) {
		 pictureBox8->Image = pictureBox4->Image;
		 fruit.pos8 = true;
	 } else if (fruit.pos9 == false && fruit.carrot == true && (fruit.lemon==true || fruit.apple == true)) {
		 pictureBox9->Image = pictureBox4->Image;
		 fruit.pos9 = true;
	 }
	 else
	 pictureBox7->Image = pictureBox4->Image;
	 fruit.pear = true;
	 fruit.pos7 = true;
	 return System::Void();
}
 System::Void onearmedform::MyForm::buttonprim5_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (fruit.pos7 == false && fruit.pos8== true) {
		 pictureBox7->Image = pictureBox5->Image;
		 fruit.pos7 = true;
	 }
	 else if (fruit.pos9 == false && (fruit.lemon==true || fruit.apple == true)) {
		 pictureBox9->Image = pictureBox5->Image;
		 fruit.pos9 = true;
	 }
	 else
	 pictureBox8->Image = pictureBox5->Image;
	 fruit.pos8 = true;
	 fruit.apple = true;
	 return System::Void();
}
 System::Void onearmedform::MyForm::buttonprim6_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (fruit.pos7 == false && fruit.pos9 == true) {
		 pictureBox7->Image = pictureBox6->Image;
		 fruit.pos7 = true;
	 }
	 else if (fruit.pos8 == false && (fruit.beet == true || fruit.strawberry == true)){
		 pictureBox8->Image = pictureBox6->Image;
		 fruit.pos8 = true;
	 }
	 else
	 pictureBox9->Image = pictureBox6->Image;
	 fruit.strawberry = true;
	 fruit.pos9 = true;
	return System::Void();
}
 System::Void onearmedform::MyForm::dvig1_Tick(System::Object^ sender, System::EventArgs^ e) {
	 int dig = rand() % 3;
	 if (dig == 0) {
		 pictureBox7->Image = pictureBox10->Image;
	 }
	 if (dig == 1) {
		 pictureBox7->Image = pictureBox11->Image;
	 }
	 if (dig == 2) {
		 pictureBox7->Image = pictureBox12->Image;
	 }
	

	 return System::Void();
}
 System::Void onearmedform::MyForm::dvig2_Tick(System::Object^ sender, System::EventArgs^ e) {
	 int dig = rand() % 3;
	 if (dig == 0) {
		 pictureBox8->Image = pictureBox10->Image;
	 }
	 if (dig == 1) {
		 pictureBox8->Image = pictureBox11->Image;
	 }
	 if (dig == 2) {
		 pictureBox8->Image = pictureBox12->Image;
	 }
	
	 
	 return System::Void();
}
 System::Void onearmedform::MyForm::dvig3_Tick(System::Object^ sender, System::EventArgs^ e) {
	 int dig = rand() % 3;
	  if (dig == 0) {
		  pictureBox9->Image = pictureBox10->Image;
	  }
	  if (dig == 1) {
		  pictureBox9->Image = pictureBox11->Image;
	  }
	  if (dig == 2) {
		  pictureBox9->Image = pictureBox12->Image;
	  }
	 
	  return System::Void();
 }
System::Void onearmedform::MyForm::stop1_Tick(System::Object^ sender, System::EventArgs^ e) {
	dvig1->Enabled = false;
	stop1->Enabled = false;
	Amount2->Text = System::Convert::ToString(score);
	Amount1->Text = System::Convert::ToString(score);
	return System::Void();
}
System::Void onearmedform::MyForm::stop2_Tick(System::Object^ sender, System::EventArgs^ e) {
	dvig2->Enabled = false;
	stop2->Enabled = false;
	Amount2->Text = System::Convert::ToString(score);
	Amount1->Text = System::Convert::ToString(score);
	return System::Void();
}
System::Void onearmedform::MyForm::stop3_Tick(System::Object^ sender, System::EventArgs^ e) {
	dvig3->Enabled = false;
	stop3->Enabled = false;
	if ((pictureBox7->Image == pictureBox8->Image) && (pictureBox8->Image == pictureBox9->Image) && (pictureBox7->Image == pictureBox9->Image)) {
		score += 200;
		globscore += 200;
	}
	else if ((pictureBox7->Image != pictureBox8->Image) && (pictureBox8->Image != pictureBox9->Image) && (pictureBox7->Image != pictureBox9->Image)) {
		score += 100;
		globscore += 100;
	}
	else
		score += 0;
	globscore += 0;
	Amount2->Text = System::Convert::ToString(score);
	Amount1->Text = System::Convert::ToString(score);
	return System::Void();
}
System::Void onearmedform::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	groupBox4->Visible = true;
	button->Visible = true;
	Score1->Visible = true;
	groupBox3->Visible = false;
	groupBox6->Visible = true;
	groupBox2->Visible = false;
	pictureBox1->Visible = false;
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox7->Visible = true;
	pictureBox8->Visible = true;
	pictureBox9->Visible = true;
	buttonprim1->Visible = false;
	buttonprim2->Visible = false;
	buttonprim3->Visible = false;
	buttonprim4->Visible = false;
	buttonprim5->Visible = false;
	buttonprim6->Visible = false;
	return System::Void();
}
System::Void onearmedform::MyForm::buttonAmount_Click(System::Object^ sender, System::EventArgs^ e) {
	setansw = Convert::ToInt32(numericUpDown2->Value);
}
