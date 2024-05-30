import { Injectable } from '@angular/core';
import { AngularFirestore } from '@angular/fire/compat/firestore';
import { Producto } from '../entidades/Producto';
import { Observable } from 'rxjs';


@Injectable({
  providedIn: 'root'
})
export class DatabaseService {

  constructor(private firestore: AngularFirestore) { }

  async guardarProducto(producto: Producto){

    const productoInfo = producto;

    await this.firestore.collection('productos').add(productoInfo);

  }

  obtenerProductos(): Observable<any[]> {
    return this.firestore.collection('productos', ref => ref.orderBy('stock')).valueChanges();

  }
}
