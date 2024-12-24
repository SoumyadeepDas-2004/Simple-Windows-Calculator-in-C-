#pragma once

namespace CalculatorApp {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class Calculator : public System::Windows::Forms::Form
    {
    public:
        Calculator(void)
        {
            InitializeComponent();
        }

    protected:
        ~Calculator()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
        textbox1->Font = gcnew System::Drawing::Font("Arial", 17);
    }
    private:
        System::ComponentModel::Container^ components;
        System::Windows::Forms::TextBox^ textbox1;
        System::Windows::Forms::Button^ btn1;
        System::Windows::Forms::Button^ btn2;
        System::Windows::Forms::Button^ btn3;
        System::Windows::Forms::Button^ btn4;
        System::Windows::Forms::Button^ btn5;
        System::Windows::Forms::Button^ btn6;
        System::Windows::Forms::Button^ btn7;
        System::Windows::Forms::Button^ btn8;
        System::Windows::Forms::Button^ btn9;
        System::Windows::Forms::Button^ btn0;
        System::Windows::Forms::Button^ btnplus;
        System::Windows::Forms::Button^ btnminus;
        System::Windows::Forms::Button^ btnmultiply;
        System::Windows::Forms::Button^ btndivide;
        System::Windows::Forms::Button^ buttonequal;
        System::Windows::Forms::Button^ buttonclear;
        double operand1, operand2, result;
        char operation;

    private:
        void InitializeComponent(void)
        {
            this->components = gcnew System::ComponentModel::Container();
            this->textbox1 = (gcnew System::Windows::Forms::TextBox());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->btnplus = (gcnew System::Windows::Forms::Button());
            this->btnminus = (gcnew System::Windows::Forms::Button());
            this->btnmultiply = (gcnew System::Windows::Forms::Button());
            this->btndivide = (gcnew System::Windows::Forms::Button());
            this->buttonequal = (gcnew System::Windows::Forms::Button());
            this->buttonclear = (gcnew System::Windows::Forms::Button());

            // 
            // textbox1
            // 
            this->textbox1->Location = System::Drawing::Point(12, 12);
            this->textbox1->Multiline = true;
            this->textbox1->Size = System::Drawing::Size(226, 71);
            this->textbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;

            // 
            // btn1
            // 
            this->btn1->Text = L"1";
            this->btn1->Location = System::Drawing::Point(12, 89);
            this->btn1->Size = System::Drawing::Size(51, 45);
            this->btn1->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn2
            // 
            this->btn2->Text = L"2";
            this->btn2->Location = System::Drawing::Point(69, 89);
            this->btn2->Size = System::Drawing::Size(51, 45);
            this->btn2->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn3
            // 
            this->btn3->Text = L"3";
            this->btn3->Location = System::Drawing::Point(130, 89);
            this->btn3->Size = System::Drawing::Size(51, 45);
            this->btn3->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn4
            // 
            this->btn4->Text = L"4";
            this->btn4->Location = System::Drawing::Point(12, 140);
            this->btn4->Size = System::Drawing::Size(51, 45);
            this->btn4->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn5
            // 
            this->btn5->Text = L"5";
            this->btn5->Location = System::Drawing::Point(69, 140);
            this->btn5->Size = System::Drawing::Size(51, 45);
            this->btn5->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn6
            // 
            this->btn6->Text = L"6";
            this->btn6->Location = System::Drawing::Point(130, 140);
            this->btn6->Size = System::Drawing::Size(51, 45);
            this->btn6->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn7
            // 
            this->btn7->Text = L"7";
            this->btn7->Location = System::Drawing::Point(12, 191);
            this->btn7->Size = System::Drawing::Size(51, 45);
            this->btn7->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn8
            // 
            this->btn8->Text = L"8";
            this->btn8->Location = System::Drawing::Point(69, 191);
            this->btn8->Size = System::Drawing::Size(51, 45);
            this->btn8->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn9
            // 
            this->btn9->Text = L"9";
            this->btn9->Location = System::Drawing::Point(130, 191);
            this->btn9->Size = System::Drawing::Size(51, 45);
            this->btn9->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btn0
            // 
            this->btn0->Text = L"0";
            this->btn0->Location = System::Drawing::Point(12, 242);
            this->btn0->Size = System::Drawing::Size(51, 45);
            this->btn0->Click += gcnew System::EventHandler(this, &Calculator::btnDigit_Click);

            // 
            // btnplus
            // 
            this->btnplus->Text = L"+";
            this->btnplus->Location = System::Drawing::Point(187, 89);
            this->btnplus->Size = System::Drawing::Size(51, 45);
            this->btnplus->Click += gcnew System::EventHandler(this, &Calculator::btnplus_Click);

            // 
            // btnminus
            // 
            this->btnminus->Text = L"―";
            this->btnminus->Location = System::Drawing::Point(187, 140);
            this->btnminus->Size = System::Drawing::Size(51, 45);
            this->btnminus->Click += gcnew System::EventHandler(this, &Calculator::btnminus_Click);

            // 
            // btnmultiply
            // 
            this->btnmultiply->Text = L"×";
            this->btnmultiply->Location = System::Drawing::Point(187, 191);
            this->btnmultiply->Size = System::Drawing::Size(51, 45);
            this->btnmultiply->Click += gcnew System::EventHandler(this, &Calculator::btnmultiply_Click);

            // 
            // btndivide
            // 
            this->btndivide->Text = L"÷";
            this->btndivide->Location = System::Drawing::Point(187, 242);
            this->btndivide->Size = System::Drawing::Size(51, 45);
            this->btndivide->Click += gcnew System::EventHandler(this, &Calculator::btndivide_Click);

            // 
            // buttonequal
            // 
            this->buttonequal->Text = L"=";
            this->buttonequal->Location = System::Drawing::Point(69, 242);
            this->buttonequal->Size = System::Drawing::Size(51, 45);
            this->buttonequal->Click += gcnew System::EventHandler(this, &Calculator::buttonequal_Click);

            // 
            // buttonclear
            // 
            this->buttonclear->Text = L"C";
            this->buttonclear->Location = System::Drawing::Point(126, 242);
            //this->buttonclear->Name = L"buttonclear";
            this->buttonclear->Size = System::Drawing::Size(51, 45);
            //this->buttonclear->TabIndex = 16;
            this->buttonclear->UseVisualStyleBackColor = true;
            this->buttonclear->Click += gcnew System::EventHandler(this, &Calculator::buttonclear_Click);
            // calculator load
            this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);


            // 
            // Calculator
            // 
            this->ClientSize = System::Drawing::Size(265, 332);
            this->MaximumSize = System::Drawing::Size(265, 332);
            this->MinimumSize = System::Drawing::Size(265, 332);
            this->Controls->Add(this->textbox1);
            this->Controls->Add(this->btn1);
            this->Controls->Add(this->btn2);
            this->Controls->Add(this->btn3);
            this->Controls->Add(this->btn4);
            this->Controls->Add(this->btn5);
            this->Controls->Add(this->btn6);
            this->Controls->Add(this->btn7);
            this->Controls->Add(this->btn8);
            this->Controls->Add(this->btn9);
            this->Controls->Add(this->btn0);
            this->Controls->Add(this->btnplus);
            this->Controls->Add(this->btnminus);
            this->Controls->Add(this->btnmultiply);
            this->Controls->Add(this->btndivide);
            this->Controls->Add(this->buttonequal);
            this->Controls->Add(this->buttonclear);
            this->Name = L"Calculator";
            this->Text = L"Calculator";
        }

        // Event handler for digit buttons
    private: System::Void btnDigit_Click(System::Object^ sender, System::EventArgs^ e) {
        Button^ clickedButton = safe_cast<Button^>(sender);
        textbox1->Text += clickedButton->Text;  // Append the clicked digit to the textbox
    }

           // Event handler for "+" button
    private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
        operand1 = Convert::ToDouble(textbox1->Text);
        operation = '+';
        textbox1->Clear();
    }

           // Event handler for "-" button
    private: System::Void btnminus_Click(System::Object^ sender, System::EventArgs^ e) {
        operand1 = Convert::ToDouble(textbox1->Text);
        operation = '-';
        textbox1->Clear();
    }

           // Event handler for "*" button
    private: System::Void btnmultiply_Click(System::Object^ sender, System::EventArgs^ e) {
        operand1 = Convert::ToDouble(textbox1->Text);
        operation = '*';
        textbox1->Clear();
    }

           // Event handler for "/" button
    private: System::Void btndivide_Click(System::Object^ sender, System::EventArgs^ e) {
        operand1 = Convert::ToDouble(textbox1->Text);
        operation = '/';
        textbox1->Clear();
    }
    private: System::Void buttonclear_Click(System::Object^ sender, System::EventArgs^ e) {
        textbox1->Clear();  // Reset the textbox to an empty string
        operand1 = 0;       // Reset operand1
        operand2 = 0;       // Reset operand2
        result = 0;         // Reset result
        operation = '\0';   // Reset the operation
    }

           // Event handler for "=" button
    private: System::Void buttonequal_Click(System::Object^ sender, System::EventArgs^ e) {
        operand2 = Convert::ToDouble(textbox1->Text);
        switch (operation) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            }
            else {
                textbox1->Text = L"Error";  // Handle division by zero
                return;
            }
            break;
        case 'c': // Clear button logic
            textbox1->Clear();  // Clear the textbox
            operand1 = 0;       // Reset operand1
            operand2 = 0;       // Reset operand2
            result = 0;         // Reset result
            operation = '\0';   // Reset the operation
            break;
        }
        textbox1->Text = result.ToString();
    }
     //private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
      //   textbox1->Font = gcnew System::Drawing::Font("Arial", 32);
      //  }

    };
}
