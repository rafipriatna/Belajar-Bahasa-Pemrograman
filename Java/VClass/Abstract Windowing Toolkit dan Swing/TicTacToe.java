import java.awt.*;
import java.awt.event.*;
import java.util.*;
import javax.swing.*;

public class TicTacToe implements ActionListener {
    private Frame mainFrame;

    Random random = new Random();
    JPanel buttonPanel = new JPanel();
    JButton[] buttons = new JButton[9];
    JLabel textPanel = new JLabel();

    boolean firstPlayerTurn;

    TicTacToe() {
        mainGUI();
    }

    public static void main(String[] args) {
        TicTacToe tictactoe = new TicTacToe();
        tictactoe.showMenu();
    }

    private void mainGUI() {
        mainFrame = new Frame("TicTacToe by Rafi");
        mainFrame.setSize(400, 400);
        // mainFrame.setLayout(new GridLayout(3, 1));
        mainFrame.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent windowEvent) {
                System.exit(0);
            }
        });
        // mainFrame.setBackground(new Color(50,50,50));

        buttonPanel.setLayout(new GridLayout(3, 3));
        buttonPanel.setBackground(new Color(150, 150, 150));

        // Add Buttons
        for (int i = 0; i < 9; i++) {
            buttons[i] = new JButton();
            buttonPanel.add(buttons[i]);
            buttons[i].setFont(new Font("Times New Roman", Font.BOLD, 48));
            buttons[i].setFocusable(false);
            buttons[i].addActionListener(this);
        }

        // textPanel.setForeground(new Color(25, 255, 0));
        textPanel.setHorizontalAlignment(JLabel.CENTER);
        textPanel.setOpaque(true);
        textPanel.setLayout(new BorderLayout());
        textPanel.setBounds(0, 0, 800, 100);
        textPanel.setSize(350, 100);
        textPanel.setFont(new Font("Times New Roman", Font.BOLD, 23));
        textPanel.setText("TicTacToe Game");

        mainFrame.add(textPanel, BorderLayout.SOUTH);
        mainFrame.add(buttonPanel);
        mainFrame.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // Aksi klik tombol di sini
    }

    public void firstTurn() {

        if (random.nextInt(2) == 0) {
            firstPlayerTurn = true;
            textPanel.setText("Player pertama main.");
        } else {
            firstPlayerTurn = false;
            textPanel.setText("Player kedua main.");
        }
    }

    private void showMenu() {
        // Definisikan menu-menunya
        final MenuBar menuBar = new MenuBar();
        Menu fileMenu = new Menu("File");

        // Bikin dropdown menu
        MenuItem mulaiMenuItem = new MenuItem("Mulai", new MenuShortcut(KeyEvent.VK_M));
        mulaiMenuItem.setActionCommand("Mulai");

        MenuItem exitMenuItem = new MenuItem("Exit");
        exitMenuItem.setActionCommand("Exit");

        // Tambahkan aksi jika menu diklik
        MenuItemListener menuItemListener = new MenuItemListener();
        exitMenuItem.addActionListener(menuItemListener);
        mulaiMenuItem.addActionListener(menuItemListener);

        // Tambahkan dropdown menu ke file menu
        fileMenu.add(mulaiMenuItem);
        fileMenu.addSeparator();
        fileMenu.add(exitMenuItem);

        // Tambahkan file menu
        menuBar.add(fileMenu);

        // Tempelkan menu ke GUI
        mainFrame.setMenuBar(menuBar);
        mainFrame.setVisible(true);
    }

    class MenuItemListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {
            if (e.getActionCommand() == "Exit") {
                System.exit(0);
            }

            if (e.getActionCommand() == "Mulai") {
                // Mulai gamenya
                firstTurn();
            }
            // textPanel.setText(e.getActionCommand() + " MenuItem clicked.");
        }
    }
}
