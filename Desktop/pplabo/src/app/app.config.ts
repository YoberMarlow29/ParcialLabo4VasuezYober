import { ApplicationConfig, importProvidersFrom } from '@angular/core';
import { provideRouter } from '@angular/router';

import { routes } from './app.routes';
import { initializeApp, provideFirebaseApp } from '@angular/fire/app';
import { getAuth, provideAuth } from '@angular/fire/auth';
import { getFirestore, provideFirestore } from '@angular/fire/firestore';

import {AngularFireModule} from '@angular/fire/compat';
import { provideHttpClient } from '@angular/common/http';



export const appConfig: ApplicationConfig = {
  providers: [
    provideHttpClient(),
    provideRouter(routes),
    provideFirebaseApp(() => initializeApp({"projectId":"primerparcial-2911",
    "appId":"1:460449999776:web:c7c86df916700850bb12c5",
    "storageBucket":"primerparcial-2911.appspot.com",
    "apiKey":"AIzaSyDul9fXjovA01CrH_pu-dsvVQbK0KtEfbo",
    "authDomain":"primerparcial-2911.firebaseapp.com",
    "messagingSenderId":"460449999776"})),
    provideAuth(() => getAuth()), provideFirestore(() => getFirestore()),
    importProvidersFrom(AngularFireModule.initializeApp({
      apiKey: "AIzaSyDul9fXjovA01CrH_pu-dsvVQbK0KtEfbo",
      authDomain: "primerparcial-2911.firebaseapp.com",
      projectId: "primerparcial-2911",
      storageBucket: "primerparcial-2911.appspot.com",
      messagingSenderId: "460449999776",
      appId: "1:460449999776:web:c7c86df916700850bb12c5"}))]
};
