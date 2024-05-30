import { Component } from '@angular/core';
import { FormBuilder, FormGroup, ReactiveFormsModule, Validators } from '@angular/forms';
import { Router, RouterModule } from '@angular/router';
import { AuthService } from '../../services/auth.service';

@Component({
  selector: 'app-login',
  standalone: true,
  imports: [ReactiveFormsModule,RouterModule],
  templateUrl: './login.component.html',
  styleUrl: './login.component.css'
})
export default class LoginComponent {

  loginForm : FormGroup;

  constructor(public auth: AuthService,public route:Router,public formBuilder: FormBuilder ){

    this.loginForm = this.formBuilder.group({

      email : ['',[Validators.required,
      Validators.email,
      Validators.pattern("[a-z0-9._%+\-]+@[a-z0-9.\-]+\.[a-z]{2,}$")
      ]],

      password :['',[Validators.required ]]
    })
  }
  get errorControl(){

    return this.loginForm?.controls;
  }

  async btnLogin() {

    try {
      const userCredential = await this.auth.login(this.loginForm.value.email, this.loginForm.value.password);
      if (userCredential) {

        console.log("inicio de sesion exitoso");
        this.route.navigate(['/bienvenida']);
      }
    } catch (error) {
      console.log(error,"inicio de sesion exitoso");

    }
  }

  btnAdmin(){
    this.loginForm.patchValue({
      email: "admin@admin.com",
      password: "123456"
    });

  }

  btnEmpleado(){

    this.loginForm.patchValue({
      email: "empleado@empleado.com",
      password: "123456"
    });
  }

}
