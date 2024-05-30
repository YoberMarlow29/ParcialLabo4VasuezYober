import { Routes } from '@angular/router';
import {canActivate,redirectUnauthorizedTo,redirectLoggedInTo } from "@angular/fire/auth-guard"

export const routes: Routes = [

  {
    path: '', redirectTo: 'bienvenida', pathMatch: 'full'
  },
  {
    path: 'bienvenida', loadComponent: () => import('./components/bienvenida/bienvenida.component'),
  },
  {
    path: 'login', loadComponent: () => import('./components/login/login.component'),
    ...canActivate(()=> redirectLoggedInTo(['/bienvenida'])),

  },

  {
    path: 'producto', loadChildren: ()=> import('./components/producto/producto.routes'),
    ...canActivate(()=> redirectUnauthorizedTo(['/login'])),
  },
  {
    path: 'listapublica', loadComponent: ()=> import('./components/producto/listado-publico/listado-publico.component'),
  },

];
