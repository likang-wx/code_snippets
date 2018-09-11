	
//1,打开一个文件	

QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png)")); 
if(fileName.isEmpty()) 
{ 
	QMessageBox::information(NULL, tr("fileName"), tr("You didn't select any files.")); 
} else 
{ 
	QMessageBox::information(NULL, tr("fileName"), tr("You selected ") + fileName); 
} 
	
//2，打开多个文件	

QStringList filesList = QFileDialog::getOpenFileNames(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png)"));
if(filesList.isEmpty())
{
	QMessageBox::information(NULL, tr("filesList"), tr("You didn't select any files."));
} else
{
	QMessageBox::information(NULL, tr("filesList"), tr("You selected ") + filesList.first());
}