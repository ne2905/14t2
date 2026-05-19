<Window x:Class="WpfApp.MainWindow"
        xmlns="http://schemas.microsoft.com/winfx/2000/xaml/presentation"
        xmlns:x="http://schemas.microsoft.com/winfx/2000/xaml"
        Title="Quản Lý Dữ Liệu" Height="450" Width="700" WindowStartupLocation="CenterScreen">
    
    <Window.Resources>
        <Style TargetType="Button">
            <Setter Property="Background" Value="#2196F3"/>
            <Setter Property="Foreground" Value="White"/>
            <Setter Property="Padding" Value="10,5"/>
            <Setter Property="Margin" Value="5"/>
            <Setter Property="FontWeight" Value="Bold"/>
            <Setter Property="BorderThickness" Value="0"/>
        </Style>
        <Style TargetType="TextBox">
            <Setter Property="Margin" Value="5"/>
            <Setter Property="Padding" Value="3"/>
            <Setter Property="Height" Value="25"/>
        </Style>
    </Window.Resources>

    <Grid Margin="10">
        <Grid.RowDefinitions>
            <RowDefinition Height="Auto"/> <RowDefinition Height="Auto"/> <RowDefinition Height="*"/>    </Grid.RowDefinitions>

        <GroupBox Header="Thông tin nhập liệu" Grid.Row0 Margin="0,0,0,10">
            <Grid>
                <Grid.ColumnDefinitions>
                    <ColumnDefinition Width="Auto"/>
                    <ColumnDefinition Width="*"/>
                    <ColumnDefinition Width="Auto"/>
                    <ColumnDefinition Width="*"/>
                </Grid.ColumnDefinitions>
                <Grid.RowDefinitions>
                    <RowDefinition Height="Auto"/>
                </Grid.RowDefinitions>

                <Label Content="Mã sản phẩm:" Grid.Column="0" VerticalAlignment="Center"/>
                <TextBox x:Name="txtMa" Grid.Column="1"/>

                <Label Content="Tên sản phẩm:" Grid.Column="2" VerticalAlignment="Center"/>
                <TextBox x:Name="txtTen" Grid.Column="3"/>
            </Grid>
        </GroupBox>

        <StackPanel Orientation="Horizontal" Grid.Row="1" HorizontalAlignment="Right">
            <Button x:Name="btnThem" Content="Thêm mới" Click="btnThem_Click"/>
            <Button x:Name="btnTruyenData" Content="Xem Chi Tiết (Sang Window khác)" Click="btnTruyenData_Click"/>
        </StackPanel>

        <DataGrid x:Name="dgDanhSach" Grid.Row="2" AutoGenerateColumns="False" 
                  IsReadOnly="True" SelectionMode="Single">
            <DataGrid.Columns>
                <DataGridTextColumn Header="Mã SP" Binding="{Binding Ma}" Width="1*"/>
                <DataGridTextColumn Header="Tên Sản Phẩm" Binding="{Binding Ten}" Width="2*"/>
            </DataGrid.Columns>
        </DataGrid>
    </Grid>
</Window>
