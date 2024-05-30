import { Component, OnInit } from '@angular/core';
import { DatabaseService } from '../../../services/database.service';

@Component({
  selector: 'app-listado-publico',
  standalone: true,
  imports: [],
  templateUrl: './listado-publico.component.html',
  styleUrl: './listado-publico.component.css'
})
export default class ListadoPublicoComponent implements OnInit {
  listaProductos: any[] = [];
  constructor(private service: DatabaseService) { }

  ngOnInit(): void {
    this.service.obtenerProductos().subscribe(productos => {
      this.listaProductos = productos;
    });
  }


}
