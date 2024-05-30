import { Component, OnInit } from '@angular/core';
import { GitService } from '../../services/git.service';

@Component({
  selector: 'app-bienvenida',
  standalone: true,
  imports: [],
  templateUrl: './bienvenida.component.html',
  styleUrl: './bienvenida.component.css'
})
export default class BienvenidaComponent implements OnInit{


  userData: any;

  constructor(private git: GitService) {}

  ngOnInit() {
    this.git.getUserData().subscribe(data => {
      this.userData = data;
    });
  }

}
