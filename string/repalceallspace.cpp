  


  void replacespace(string&sentance){
    int i=0;
    int n=sentance.length;
    for (int i=0;i<n;i++){
      if(sentance[i]==' '){
        sentance[i]=@;
      }
    }
    return sentance;
  }